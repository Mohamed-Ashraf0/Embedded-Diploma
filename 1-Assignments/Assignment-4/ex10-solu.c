#include <stdio.h>
#include<string.h>

void pointer_swap (int **ptr1,int **ptr2);

int main(void)
{
int num1=5,num2=10;
int *ptr1=&num1 ,*ptr2=&num2;
pointer_swap(&ptr1,&ptr2);
printf("pointer 1 points to:- %d\npointer 2 points to:- %d",*ptr1,*ptr2);
}

void pointer_swap (int **ptr1,int **ptr2)
{
	int *temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}

