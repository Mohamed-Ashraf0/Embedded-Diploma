#include <stdio.h>

int heater(int x);

int main(void)
{
	int temp,time;
	printf("Enter the temperature:-\n");
	fflush(stdout);
	scanf("%d",&temp );
	time=heater(temp);
	printf("the required heater activation time is:- %d",time);
}

int heater(int x )
{
	if(x>=0 && x<=30)
	{
		x=7;
	}
	else if(x>30 && x<=60)
	{
		x=5;
	}
	else if(x>60 && x<=90)
	{
		x=3;
	}
	else if(x>90 && x<=100)
	{
		x=1;
	}
	else
	{
		x=0;
	}
	return x;
}
