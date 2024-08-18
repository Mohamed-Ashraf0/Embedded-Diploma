#include <util/delay.h>
#include <avr/io.h>

int main(void)
{
	DDRC|=(1<<0)|(1<<1)|(1<<2);
    int LED=0x01;
	while(1)
	{
		PORTC&=~0x07;
		PORTC|=LED;
		_delay_ms(500);
		LED=LED<<1;
		LED=LED==0x08?0x01:LED;

	}
	return 0;
}

