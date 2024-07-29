#include <stdio.h>
#define SIZE 10

int second_largest(int *arr,int size);

int main(void)
{
	int arr[SIZE];
	int result;
	printf("enter 10 array elements:-\n");
	fflush(stdout);
	for(int i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	result=second_largest(arr,SIZE);
	printf("second largest number of array is:- %d",result);
}

int second_largest(int *arr,int size)
{
	int max1,max2,i;
	if(arr[0]>arr[1])
	{
		max1=arr[0];
		max2=arr[1];

	}
	else
	{
		max2=arr[0];
		max1=arr[1];
	}
	for(i=2;i<size;i++)
	{
		if(arr[i]>max1)
		{
			max2=max1;
			max1=arr[i];
		}
	}
	return max2;
}
