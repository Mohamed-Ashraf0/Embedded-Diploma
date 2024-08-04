#include <stdio.h>

#define SIZE 11

int odd_repetitions_element (int *arr,int size);

int main(void)
{
	int result;
	int arr[SIZE]={1,8,4,3,5,2,8,1,4,3,5};
	result=odd_repetitions_element(arr,SIZE);
    printf("odd repetitions element is:- %d",result);

}

int odd_repetitions_element (int *arr,int size)
{
	int i,j,result,count;
	for(i=0;i<size;i++)
	{
		for(j=0; j<size;j++)
		{
			if(arr[i] == arr[j])
			{
				result = i;
				count++;
			}
		}
		if(count%2 != 0)
		{
			break;
		}
		count = 0;
	}
	return arr[result];
}
