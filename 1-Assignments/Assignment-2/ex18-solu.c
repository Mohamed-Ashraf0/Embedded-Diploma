
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
	int y=cbrt(x);
	if(pow(y,3)==x)
	{
		return 0;
	}
	return 1;
}
