#include <stdio.h>

void check_postive_negative(int x);

int main(void){
	int x;
	printf("Enter the number:-\n");
	fflush(stdout);
	scanf("%d",&x);
	check_postive_negative(x);
    return 0;
}

void check_postive_negative(int x){
	if(x>0)
	{
		printf("this number is positive");
	}
	else if(x<0)
	{
		printf("this number is negative");
	}
	else
	{
		printf("this number is zero");
	}

}
