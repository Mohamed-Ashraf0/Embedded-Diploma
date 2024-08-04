#include <stdio.h>

#define SIZE 10

int main(void)
{
	int i;
	int arr[SIZE]={1,2,3,4,5,6,7,8,9,10};
	int *ptr=arr;
	for(i=SIZE-1;i>=0;i--)
	{
		printf("%d ",*(ptr+i));
	}

}

