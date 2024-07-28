#include <stdio.h>
#define SIZE 5

int countoccurrences(int *arr,int size);

int main(void)
{
	int arr[SIZE];
	int result;
	printf("enter 5 array elements:-\n");
	fflush(stdout);
	for(int i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	result=countoccurrences(arr,SIZE);
	printf("sum of array is:- %d",result);
}

int countoccurrences(int *arr,int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	return sum;
}

