#include <stdio.h>



int fibonacci (int n);

int main(void)
{
	int  n;
	printf("enter the index of fibonacci number:-\n");
	fflush(stdout);
	scanf("%d",&n);
	printf("the number is:- %d",fibonacci(n));
}

int fibonacci (int n)
{
	if(n==0 || n==1)
	{
		return n;
	}
	else
		return fibonacci(n-1)+fibonacci(n-2);
}

