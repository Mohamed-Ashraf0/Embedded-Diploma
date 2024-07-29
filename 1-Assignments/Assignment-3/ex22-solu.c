 #include <stdio.h>

#define SIZE 10

int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new);
int main(void)
{
	int arr1[SIZE]={1,2,3,3,3,4,4,5,5,5};
	int arr2[SIZE];
	int result,new_size,i;
	result=removeDuplicates(arr1,SIZE,arr2,&new_size);
	if(result)
	{
		printf("non duplicate array is:-");

		for(i=0;i<new_size;i++)
		{
			printf("%d ",arr2[i]);
		}
	}
	else
	{
		printf("empty array");
	}
}

int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new)
{
	int i;
	if (n_old==0)
	{
		return 0;
	}
	else
	{
		*n_new=1;
		arr_new[0]=arr_old[0];
		for(i=0;i<n_old-1;i++)
		{
			if(arr_old[i]!=arr_old[i+1])
			{
				arr_new[*n_new]=arr_old[i+1];
				(*n_new)++;
			}
		}
		return 1;
	}

}

