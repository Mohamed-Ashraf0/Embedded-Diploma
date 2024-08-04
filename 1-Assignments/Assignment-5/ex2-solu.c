#include <stdio.h>


struct distance
{
	float inch;
	float feet;
}d1,d2,sum;

int main(void)
{
	printf("enter first distance in inch:- ");
	fflush(stdout);
	scanf("%f",&d1.inch);
	printf("enter first distance in feet:- ");
	fflush(stdout);
	scanf("%f",&d1.feet);
	printf("enter second distance in inch:- ");
	fflush(stdout);
	scanf("%f",&d2.inch);
	printf("enter second distance in feet:- ");
	fflush(stdout);
	scanf("%f",&d2.feet);
	sum.inch=d1.inch+d2.inch;
	sum.feet=d1.feet+d2.feet;
	printf("sum of two distance in inch is:- %.1f\n",sum.inch);
	printf("sum of two distance in feet is:- %.1f",sum.feet);
}
