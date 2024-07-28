#include <stdio.h>

#define SIZE 100

void fibonacci (int *arr,int term);

int main(void)
{
	int arr[SIZE], n;
	printf("enter the index of fibonacci number:-\n");
	fflush(stdout);
	scanf("%d",&n);
	fibonacci(arr,n);
	printf("the number is:- %d",arr[n-1]);
}

void fibonacci (int *arr,int term)
{
	arr[0]=1;
	arr[1]=1;
	for(int i=2;i<term;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
	}
}

