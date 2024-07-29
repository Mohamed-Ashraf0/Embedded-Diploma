#include <stdio.h>

#define SIZE 254

void descending_array(unsigned char *arr,int lowervalue ,int uppervalue );

int main(void)
{
	unsigned char arr[SIZE];
	int lowervalue,uppervalue,i;
	printf("enter the lower value:-\n");
	fflush(stdout);
	scanf("%d",&lowervalue);
	printf("enter the upper value:-\n");
	fflush(stdout);
	scanf("%d",&uppervalue);
	if(uppervalue>=lowervalue)
	{
		descending_array(arr,lowervalue,uppervalue);
		printf("the result array is:-\n");
		for(i=0;i<(uppervalue-lowervalue-1);i++)
		{
			printf("%d ",arr[i]);
		}
	}
	else
	{
		arr[0]=0xf;
		arr[1]=0xf;
		for(i=0;i<2;i++)
		{
			printf("%x",arr[i]);
		}
	}

}

void descending_array(unsigned char *arr,int lowervalue ,int uppervalue)
{
	int i,j;
	char temp;
	arr[0]=lowervalue+1;
	for(i=1;i<(uppervalue-lowervalue-1);i++)
	{
		arr[i]=arr[i-1]+1;
	}
	//to sort
	for(i=0;i<(uppervalue-lowervalue-2);i++)
	{
		for(j=0;j<(uppervalue-lowervalue-2);j++)
		{
			if(arr[j+1]>arr[j])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

}
