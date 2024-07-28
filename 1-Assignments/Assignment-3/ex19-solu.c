#include <stdio.h>

#define SIZE 5

int comp_array(int *arr1,int *arr2,int size);

int main(void)
{
	int arr1[SIZE], arr2[SIZE],result;
	printf("enter 5 array elements:-\n");
	fflush(stdout);
	for(int i=0;i<SIZE;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("enter 5 array elements:-\n");
	fflush(stdout);
	for(int i=0;i<SIZE;i++)
	{
		scanf("%d",&arr2[i]);
	}
	result=comp_array(arr1,arr2,SIZE);
	if(result)
	{
	printf("array are not identical");
	}
	else
	{
		printf("array are identical");
	}
}

int comp_array(int *arr1,int *arr2,int size)
{
	int i,result=0;
	for(i=0;i<size;i++)
	{
		if(arr1[i]!=arr2[i])
		{
			result=1;
			break;
		}
	}
	return result;
}
