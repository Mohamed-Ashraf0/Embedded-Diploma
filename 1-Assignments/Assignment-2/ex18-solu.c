#include <stdio.h>
#include <math.h>
int pow_3(int x);

int main(void)
{
	int num;
	printf("Enter the number:-\n");
	fflush(stdout);
	scanf("%d",&num );
	if(!pow_3(num))
	{
		printf("the number is power of 3");
	}
	else
	{
		printf("the number is not power of 3");
	}

}

int pow_3(int x)
{
	int i=0;
	while(pow(3,i)<=x)
	{
		if(pow(3,i)==x){
			return 0;
		}
		i++;
	}
	return 1;
}
