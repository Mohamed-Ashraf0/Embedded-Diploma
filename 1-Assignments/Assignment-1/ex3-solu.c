#include <stdio.h>
int main(){
	float Celsius ,Fahrenheit;
	printf("Enter the temperature in Celsius\n");
	fflush(stdout);
	scanf("%f",&Celsius);
	Fahrenheit=Celsius*(9/5)+32;
	printf("temperature in Fahrenheit =%f",Fahrenheit);
}
