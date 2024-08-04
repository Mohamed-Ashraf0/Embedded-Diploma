#include <stdio.h>

#define SIZE 10

void swap (int *ptr1,int *ptr2);

int main(void)
{
	int num1 =5,num2=8;
	void (*ptr_func)(int*,int*)=swap;
	(*ptr_func)(&num1,&num2);
	printf("after swap number 2 = %d",num2);


}

void swap (int *ptr1,int *ptr2)
{
	*ptr1 = *ptr1 ^ *ptr2;
	*ptr2 = *ptr1 ^ *ptr2;
	*ptr1 = *ptr1 ^ *ptr2;
}

