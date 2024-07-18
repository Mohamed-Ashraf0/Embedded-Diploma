#include <stdio.h>

int one_counter(unsigned char x );

int main(void)
{
	unsigned char num;
	printf("Enter the number :-\n");
	fflush(stdout);
	scanf("%u",&num);
	printf("the number of ones is:- %d",one_counter(num));
}

int one_counter(unsigned char x)
{
	int counter=0;
	while(x){
		if(x%10==1){
			counter++;
		}
		x/=10;
	}
	return counter;
}
