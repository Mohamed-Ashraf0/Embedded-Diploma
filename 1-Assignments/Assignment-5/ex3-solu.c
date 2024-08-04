#include <stdio.h>


struct complex
{
	float real;
	float imag;
}num1,num2,sum;

int main(void)
{
	printf("enter first real in inch:- ");
	fflush(stdout);
	scanf("%f",&num1.real);
	printf("enter first imaginary in feet:- ");
	fflush(stdout);
	scanf("%f",&num1.imag);
	printf("enter second real in inch:- ");
	fflush(stdout);
	scanf("%f",&num2.real);
	printf("enter second imaginary in feet:- ");
	fflush(stdout);
	scanf("%f",&num2.imag);
	sum.real=num1.real+num2.real;
	sum.imag=num1.imag+num2.imag;
	printf("sum of two nums is:-  inch is:- %.1f +%.1fi\n",sum.real,sum.imag);

}
