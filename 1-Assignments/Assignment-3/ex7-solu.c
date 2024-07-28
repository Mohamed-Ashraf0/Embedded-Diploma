#include <stdio.h>


int main(void)
{
	int arr[100];
	arr[0]=1;
	for(int i=1;i<100;i++)
	{
		arr[i]=arr[i-1]+2;
	}
	printf("%d",arr[99]);
}

