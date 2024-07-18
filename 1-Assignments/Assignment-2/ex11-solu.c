#include <stdio.h>
#include <math.h>
int pow_2(int x);

int main(void)
{
	int num;
	printf("Enter the number:-\n");
	fflush(stdout);
	scanf("%d",&num );
	if(pow_2(num))
	{
		printf("the number is power of 2");
	}
	else
	{
		printf("the number is not power of 2");
	}

}

int pow_2(int x)
{
	int i=0;
	while(pow(2,i)<=x)
	{
		if(pow(2,i)==x){
			return 1;
		}
		i++;
	}
	return 0;
}
