#include <stdio.h>


int main(void)
{
	int arr[10];
	arr[0]=1;
	for(int i=1;i<10;i++)
	{
		arr[i]=arr[i-1]*3;
	}
	printf("%d",arr[9]);
}

