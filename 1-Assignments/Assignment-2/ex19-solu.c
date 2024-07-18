#include <stdio.h>

int one_counter(unsigned short x );

int main(void)
{
	unsigned short num;
	printf("Enter the number :-\n");
	fflush(stdout);
	scanf("%hu",&num);
	printf("the number of ones is:- %d",one_counter(num));
}

int one_counter(unsigned short x)
{
	int counter=0,temp=0;
	while(x){
		if(x%10==1){
			temp++;
		}
		else
		{
			temp=0;
		}
		counter=counter<temp?temp :counter;
		x/=10;
	}
	return counter;
}

