#include <stdio.h>

#define SIZE 10

void Selectionsort(int *arr ,int size);

int main(void)
{
	int arr[SIZE];
	printf("enter 10 numbers :-\n");
	fflush(stdout);
	for(int i=0;i<SIZE;i++)
	{
		scanf("%d",(arr+i));
	}
	Selectionsort(arr,SIZE);
	printf("array after ascending order :-\n");
	fflush(stdout);
	for(int i=0;i<SIZE;i++)
	{
		printf("%d ",arr[i]);
	}

}

void Selectionsort(int *arr ,int size)
{
	int min_index,temp;
	for(int i=0 ;i<size-1;i++)
	{
		min_index=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[min_index]>arr[j])
			{
				min_index=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min_index];
		arr[min_index]=temp;
	}
}


