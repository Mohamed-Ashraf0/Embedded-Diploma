#include <stdio.h>

int hole_counter(int x);

int main(void)
{
	int num;
	printf("Enter the number:-\n");
	fflush(stdout);
	scanf("%d",&num );
    printf("number of holes is:- %d",hole_counter(num));
}

int hole_counter(int x)
{
	int temp=x,counter=0;
	while(temp){
		switch(temp%10){
		case 0:
		case 4:
		case 6:
		case 9:
			counter++;
			break;
		case 8:
			counter+=2;
			break;
		default:
			counter+=0;
			break;
		}
		temp/=10;
	}
	return counter;
}

