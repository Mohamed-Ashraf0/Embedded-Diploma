#include <stdio.h>

#define SIZE 10

void bubblesort(int *arr ,int size);

int main(void)
{
	int arr[SIZE];
	printf("enter 10 numbers :-\n");
	fflush(stdout);
	for(int i=0;i<SIZE;i++)
	{
		scanf("%d",(arr+i));
	}
	bubblesort(arr,SIZE);
	printf("array after ascending order :-\n");
	fflush(stdout);
	for(int i=0;i<SIZE;i++)
	{
		printf("%d ",arr[i]);
	}

}

void bubblesort(int *arr ,int size)
{
	for(int i=0 ;i<size-1;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				arr[j]=arr[j]+arr[j+1];
				arr[j+1]=arr[j]-arr[j+1];
				arr[j]=arr[j]-arr[j+1];
			}
		}
	}
}
