#include <stdio.h>

#define SIZE 10

int LinearSearch (int *arr ,int size,int target);

int main(void)
{
	int arr[SIZE],index,target;
	printf("enter 10  numbers :-\n");
	fflush(stdout);
	for(int i=0;i<SIZE;i++)
	{
		scanf("%d",(arr+i));
	}
	printf("enter the target :-\n");
	fflush(stdout);
	scanf("%d",&target);
	index=LinearSearch(arr,SIZE,target);
	if(index==-1)
	{
		printf("element not found");
	}
	else
	{
		printf("element index is:- %d",index);
	}

}

int LinearSearch(int *arr ,int size ,int target)
{
	int index=-1;
	for(int i=size-1;i>=0;i--)
	{
		if(arr[i]==target)
		{
			index=i;
			break;
		}
	}
	return index;
}

