#include <stdio.h>

int Fibonacci(int x );

int main(void)
{
	int num;
	printf("Enter the number :-\n");
	fflush(stdout);
	scanf("%d",&num);
	printf("the result is:- %d",Fibonacci(num));
}

int Fibonacci(int x)
{
	if(x<2)
	{
		return x;
	}
	else
	{
		return Fibonacci(x-1) + Fibonacci(x-2);
	}

}
