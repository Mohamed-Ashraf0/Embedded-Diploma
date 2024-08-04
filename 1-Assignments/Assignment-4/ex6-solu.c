#include <stdio.h>

#define SIZE 10

int largest_element (int *arr,int size);

int main(void)
{
	int result,i;
	int arr[SIZE]={14,2,6,3,9,10,8,1,7,12};
	result=largest_element(arr,SIZE);
	printf("array elements is:- ");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nlargest value is:- %d",result);

}

int largest_element (int *arr,int size)
{
	int i,max=*arr;
	for(i=1;i<size;i++)
	{
		if(*(arr+i)>max)
		{
			max=*(arr+i);
		}
	}
	return max;

}
