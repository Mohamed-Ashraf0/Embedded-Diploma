#include <stdio.h>

#define SIZE 10

int main(void)
{
	int i,sum=0;
int arr[SIZE]={2,4,6,8,1,3,5,7,9,10};
int *ptr=arr;
for(i=0;i<SIZE;i++)
{
	sum+=*(ptr+i);
}
printf("sum of the array elemrnts is:- %d",sum);
}

