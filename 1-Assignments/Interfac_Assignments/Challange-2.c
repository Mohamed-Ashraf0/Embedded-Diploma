#include <util/delay.h>
#include <avr/io.h>

int main(void)
{
	DDRD|=(1<<0)|(1<<1)|(1<<2)|(1<<3)|(1<<4)|(1<<5)|(1<<6)|(1<<7);
	DDRA&=~((1<<3)|(1<<4));
	int LED_even=0x02;
	int LED_odd=0x01;
	while(1)
	{
		if((PINA & (1<<3)) ||( (PINA & (1<<3)) && (PINA & (1<<4))))
		{
			PORTD&=~0xFF;
			PORTD|=LED_even;
			LED_even=LED_even<<2;
			LED_even=LED_even==0x200?0x02:LED_even;
		}
		else if(PINA & (1<<4))
		{
			PORTD&=~0xFF;
			PORTD|=LED_odd;
			LED_odd=LED_odd<<2;
			LED_odd=LED_odd==0x100?0x01:LED_odd;
		}
		else
		{
			PORTD&=~0xFF;
		}
		_delay_ms(500);

	}
	return 0;
}

