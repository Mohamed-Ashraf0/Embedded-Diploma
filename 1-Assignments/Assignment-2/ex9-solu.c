#include <stdio.h>

void swap(int *x ,int *y);

int main(void)
{
	int num1,num2;
	printf("Enter the first number ,second number\n");
	fflush(stdout);
	scanf("%d %d",&num1 ,&num2);
	swap(&num1,&num2);
    printf("first number= %d , second number=%d",num1,num2);
}

void swap(int *x ,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

