#include <stdio.h>

int even_odd(int x);

int main(void)
{
	int num=0;
	printf("Enter the number\n");
	fflush(stdout);
	scanf("%d",&num);
	if(!even_odd(num))
	{
		printf("this number is even");
	}
	else
	{
	printf("this number is odd");
	}
}

int even_odd(int x){
	if(x%2==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}

}

