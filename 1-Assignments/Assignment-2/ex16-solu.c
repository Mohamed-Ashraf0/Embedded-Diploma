#include <stdio.h>

int one_counter(unsigned char x );

int main(void)
{
	unsigned char num;
	printf("Enter the number in hex format :-\n");
	fflush(stdout);
	scanf("%x",&num);
	printf("the number of ones is:- %d",one_counter(num));
}

int one_counter(unsigned char x)
{
	int counter=0,mask=0x01;
	while(x){
		if(x & mask)
		{
			counter++;
		}
		x=x>>1;
	}
	return counter;
}
