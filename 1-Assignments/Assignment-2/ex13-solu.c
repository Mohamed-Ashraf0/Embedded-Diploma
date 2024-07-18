#include <stdio.h>

int float_adder(float x ,float y);

int main(void)
{
	float num1,num2;
	printf("Enter  number1 and number2:-\n");
	fflush(stdout);
	scanf("%f %f",&num1 ,&num2);
	printf("the result is:- %d",float_adder(num1,num2));
}

int float_adder(float x ,float y)
{

	return (int)(x+y);
}

