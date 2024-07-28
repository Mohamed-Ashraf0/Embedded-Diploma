#include <stdio.h>

#define SIZE 15

int count_longest_occurrences(int arr[],int size,int target);

int main(void)
{
	int arr[SIZE];
	int target;
	int result;
	printf("enter 15 array elements:-\n");
	fflush(stdout);
	for(int i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the target:-\n");
	fflush(stdout);
	scanf("%d",&target);
	result=count_longest_occurrences(arr,SIZE,target);
	printf("number of consecutive occurrence of %d is:- %d",target,result);
}

int count_longest_occurrences(int arr[],int size,int target)
{
	int counter=0,max_counter=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==target)
		{
			counter++;
			if(counter >max_counter)
			{
				max_counter=counter;
			}
		}
		else
		{
			counter=0;
		}
	}
	return max_counter;
}


