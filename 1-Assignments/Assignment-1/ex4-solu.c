#include <stdio.h>
#include<math.h>
#define pi 3.14159265
int main(){
	float radius ,area ,circumference;
	printf("Enter the radius of a circle\n");
	fflush(stdout);
	scanf("%f",&radius);
	area=pi*pow(radius,2);
	circumference=2*pi*radius;
	printf("the area =%f\nthe circumference =%f",area,circumference);
}
