#include <stdio.h>

#define SIZE 10

void array_cpy (int *arr1,int *arr2,int size);

int main(void)
{
	int i;
	int arr1[SIZE]={1,2,3,4,5,6,7,8,9,10};
	int arr2[SIZE]={11,12,13,14,15,16,17,18,19,20};
	array_cpy(arr1,arr2,SIZE);
	printf("2 arrays after copying arr1 elements into array2\n");
	printf("fisrt array:- ");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",arr1[i] );
	}
	printf("\nsecond array:- ");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",arr2[i]);
	}
}

void array_cpy (int *arr1,int *arr2,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		*(arr2+i)=*(arr1+i);
	}

}

