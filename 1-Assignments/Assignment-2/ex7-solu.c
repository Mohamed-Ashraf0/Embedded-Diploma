#include <stdio.h>

void first_mul_of_second(int x ,int y);

int main(void)
{
	int num1,num2;
	printf("Enter the first number ,second number\n");
	fflush(stdout);
	scanf("%d %d",&num1 ,&num2);
	first_mul_of_second(num1,num2);

}

void first_mul_of_second(int x ,int y){
	if(x%y==0)
	{
		printf("first is multiple of the second");
	}
	else
	{
		printf("first is not multiple of the second");
	}

}

