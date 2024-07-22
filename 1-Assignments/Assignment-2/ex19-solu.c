#include <stdio.h>

int one_counter(unsigned short x );

int main(void)
{
	unsigned short num;
	printf("Enter the number in hex format :-\n");
	fflush(stdout);
	scanf("%x",&num);
	printf("the number of ones is:- %d",one_counter(num));
}

int one_counter(unsigned short x)
{
	int counter=0,temp=0,mask=0x01;
	while(x){
		if(x & mask)
		{
			temp++;
		}
		else
		{
			temp=0;
		}
		if(temp>counter)
		{
			counter=temp;
		}
		x=x>>1;
	}
	return counter;
}
