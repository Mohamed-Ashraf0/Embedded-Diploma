#include <stdio.h>

#define SIZE 5

void swap_array(int *arr1,int size1,int *arr2,int size2);

int main(void)
{
	int arr1[SIZE],arr2[SIZE],i;
	printf("enter 5 numbers :-\n");
	fflush(stdout);
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",(arr1+i));
	}
	printf("enter 5 numbers :-\n");
	fflush(stdout);
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",(arr2+i));
	}
	swap_array(arr1,SIZE,arr2,SIZE);
	printf("first array after is:-");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\nsecond array after is:-");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",arr2[i]);
	}
}

void swap_array(int *arr1,int size1,int *arr2,int size2)
{
	int temp;
	for(int i=0;i<size2;i++)
	{
		temp=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp;
	}
}

