#include <stdio.h>

int one_counter(unsigned int x );

int main(void)
{
	unsigned int num;
	printf("Enter the number :-\n");
	fflush(stdout);
	scanf("%u",&num);
	printf("the number of ones is:- %d",one_counter(num));
}

int one_counter(unsigned int x)
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

