/*
 * main.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Moham
 */
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

unsigned char sec = 0;
unsigned char min = 0;
unsigned char hour = 0;
unsigned char count = 1;
unsigned char TCNT=0;
unsigned char pause_flag=0;
unsigned char Max_flag=0;
unsigned char Min_flag=0;

void TIMER1_CRC_init(void)
{
	TCNT1=0; //counter start at 0
	TCCR1A|=(1<<FOC1A)|(1<<FOC1B); //non pwm
	TCCR1B|=(1<<WGM12)|(1<<CS12)|(1<<(CS10)); //compare mode - priscaler=1024
	OCR1A=15624;  //1sec=(1024/16MHZ)*15625
	TIMSK|=(1<<OCIE1A);//enable compare interrupt
}

void INT0_init(void){
	DDRD &= ~(1<<PD2); //PD2 input
	PORTD |= (1<<PD2); //enable internal resistance
	GICR|=(1<<INT0);   //enable INT0
	MCUCR|=(1<<ISC01); // with falling edge
}

void INT1_init(void){
	DDRD &= ~(1<<PD3); //PD3 input
	MCUCR|=(1<<ISC11) | (1<<ISC10); //enable INT1
	GICR|=(1<<INT1) ; //with rising edge
}

void INT2_init(void){
	GICR|=(1<<INT2);  //enable INT2
	MCUCSR&=~(1<<ISC2); //with falling edge
}

void Hourse_Increment(void){
	if(hour<99) //max 99 hour
	{
		hour++;
		Min_flag=0;
		PORTD&=~(1<<0);//turn off buzzer
	}
}

void Hourse_Decrement(void){
	if(hour>0) //no time in negative
	{
		hour--;
		Max_flag=0;
	}
}

void Minutes_Increment(void){
	if(min<59) //max 59 min
	{
		min++;
		Min_flag=0;
		PORTD&=~(1<<0);//turn off buzzer
	}
}

void Minutes_Decrementt(void){
	if(min>0) //no time in negative
	{
		min--;
		Max_flag=0;
	}
}

void Seconds_Increment(void){
	if(sec<59) //max 59 sec
	{
		sec++;
		Min_flag=0;
		PORTD&=~(1<<0);//turn off buzzer
	}
}

void Seconds_Decrement(void){
	if(sec>0) //no time in negative
	{
		sec--;
		Max_flag=0;
	}
}

void Count_Toggle(void){
	count=!count;
	PORTD ^=(1<<4); //toggle count led
	PORTD ^=(1<<5);
	Max_flag=0;//reset max and min flag
	Min_flag=0;
	PORTD&=~(1<<0);//turn off buzzer
}

ISR(TIMER1_COMPA_vect)
{
	if(count && !(Max_flag))//count up mode
	{
		sec++;
		if(sec == 60){
			sec = 0;
			min++;
		}
		if(min == 60){
			min = 0;
			hour++;
		}
		if(hour == 100){
			hour=99;
			min=59;
			sec=59;
			Max_flag=1;
		}
	}
	else{
		if (Min_flag) {
			PORTD |= (1 << 0);
		} else {
			if (sec > 0) {
				sec--;
			} else {
				sec = 59;
				if (min > 0) {
					min--;
				} else {
					min = 59;
					if (hour > 0) {
						hour--;
					} else {
						hour = 0;
						min = 0;
						sec = 0;
						Min_flag = 1;
					}
				}
			}
		}
	}
}


ISR(INT0_vect){
	sec = 0;  //reset time to zero
	min = 0;
	hour = 0;
	TCNT1=0; //counter to zero
	Max_flag=0;//reset max and min flag
	Min_flag=0;
	PORTD&=~(1<<0);//turn off buzzer
}

ISR(INT1_vect){
	TCNT=TCNT1; //store count value
	TIMSK&=~(1<<OCIE1A); //stop timer interrupt
	pause_flag=1;

}

ISR(INT2_vect){
	if(pause_flag)
	{
		TCNT1=TCNT;  //return counter to stop place
		TIMSK|=(1<<OCIE1A); //enable timer interrupt
	}
}


int main()
{
	SREG|=(1<<7);
	TIMER1_CRC_init();
	INT0_init();
	INT1_init();
	INT2_init();
	DDRC|= 0x0F;   //PORTC fist 4 bins Output (time)
	PORTC&=~(0XF); //time initial equal 0
	DDRA|= 0x3F;   //PORTA first 6 bins output(7 segment selector)
	DDRB &=0X00;  //all PB bin input
	PORTB |=0XFF; //enable all PB internal pull up
	PORTD |=(1<<4);//default count up (red led on)
	PORTD &=~(1<<5);//count down LED off (yellow LED off)
	DDRD |=(1<<0) |(1<<4) | (1<<5); //count up and count down led and buzzaer bins are output
	while(1)
	{
		PORTA =(PORTA &(0XC0)) | (1<<5);    // enable first 7 segment
		PORTC = (PORTC &(0XF0)) | sec%10;	 // Display 1st digit of seconds
		_delay_us(20);	 // wait for 20 us
		PORTA =(PORTA &(0XC0)) | (1<<4);    // enable second 7 segment
		PORTC = (PORTC &(0XF0)) |sec/10;	 // Display second digit of seconds
		_delay_us(20);	 // wait for 20 us
		PORTA =(PORTA &(0XC0)) | (1<<3);    // enable third 7 segment
		PORTC = (PORTC &(0XF0)) |min%10;	 // Display third digit of seconds
		_delay_us(20);	 // wait for 20 us
		PORTA =(PORTA &(0XC0)) | (1<<2);    // enable fourth 7 segment
		PORTC = (PORTC &(0XF0)) |min/10;	 // Display fourth digit of seconds
		_delay_us(20);	 // wait for 20 us
		PORTA =(PORTA &(0XC0)) | (1<<1);    // enable fifth 7 segment
		PORTC =(PORTC &(0XF0)) | hour%10;	 // Display fifth digit of seconds
		_delay_us(20);	 // wait for 20 us
		PORTA =(PORTA &(0XC0)) | (1<<0);    // enable sixth 7 segment
		PORTC = (PORTC &(0XF0)) |hour/10;	 // Display sixth digit of seconds
		_delay_us(20);	 // wait for 20 us
		if(!(PINB & (1<<7))) // check if the push button  is pressed or not
		{
			_delay_ms(20);
			if(!(PINB & (1<<7))) //second check due to switch de-bouncing
			{
				Count_Toggle();
			}
		}
		while( !(PINB & (1<<7)) ){} // wait until switch is released
		if(!(PINB & (1<<1)))
		{
			_delay_ms(20);
			if(!(PINB & (1<<1)))
			{
				Hourse_Increment();
			}
		}
		while( !(PINB & (1<<1)) ){}
		if(!(PINB & (1<<0)))
		{
			_delay_ms(20);
			if(!(PINB & (1<<0)))
			{
				Hourse_Decrement();
			}
		}
		while( !(PINB & (1<<0)) ){}
		if(!(PINB & (1<<4)))
		{
			_delay_ms(20);
			if(!(PINB & (1<<4)))
			{
				Minutes_Increment();
			}
		}
		while( !(PINB & (1<<4)) ){}
		if(!(PINB & (1<<3)))
		{
			_delay_ms(20);
			if(!(PINB & (1<<3)))
			{
				Minutes_Decrementt();
			}
		}
		while( !(PINB & (1<<3)) ){}
		if(!(PINB & (1<<6)))
		{
			_delay_ms(20);
			if(!(PINB & (1<<6)))
			{
				Seconds_Increment();
			}
		}
		while( !(PINB & (1<<6)) ){}
		if(!(PINB & (1<<5)))
		{
			_delay_ms(20);
			if(!(PINB & (1<<5)))
			{
				Seconds_Decrement();
			}
		}
		while( !(PINB & (1<<5)) ){}
	}
}

