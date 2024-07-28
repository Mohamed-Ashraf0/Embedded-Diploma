#include <stdio.h>

#define SIZE 5

void reverse_array(int *arr,int size);

int main(void)
{
	int arr[SIZE],i;
	printf("enter 5 numbers :-\n");
	fflush(stdout);
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",(arr+i));
	}
	reverse_array(arr,SIZE);
	printf("reversed array is:-");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",arr[i]);
	}
}

void reverse_array(int *arr,int size)
{
	int temp;
	for(int i=0;i<size/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[size-1-i];
		arr[size-1-i]=temp;
	}
}

