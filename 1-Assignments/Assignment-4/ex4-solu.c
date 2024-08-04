#include <stdio.h>

#define SIZE 10

int smallest_element (int *arr,int size);

int main(void)
{
	int result;
	int arr[SIZE]={14,2,6,3,9,10,8,1,7,12};
	result=smallest_element(arr,SIZE);
    printf("smallest value is:- %d",result);

}

int smallest_element (int *arr,int size)
{
	int i,min=*arr;
	for(i=1;i<size;i++)
	{
		if(*(arr+i)<min)
		{
			min=*(arr+i);
		}
	}
	return min;

}

