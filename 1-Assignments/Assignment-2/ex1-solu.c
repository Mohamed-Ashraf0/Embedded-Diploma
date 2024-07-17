#include <stdio.h>

int cube(int x);

int main(void){
	int x;
	printf("Enter the number:-\n");
	fflush(stdout);
	scanf("%d",&x);
	printf("the cube of the number is:- %d",cube(x));
}

int cube(int x){
	return x*x*x;
}
