#include <stdio.h>

int xor_max( int x ,int y);

int main(void)
{
	int num1 , num2;
	printf("Enter the number 1 and number 2 :-\n");
	fflush(stdout);
	scanf("%d %d",&num1,&num2);
	printf("the number of ones is:- %d",xor_max(num1,num2));
}

int xor_max( int x ,int y)
{
	int max=0,result; //no negative output
	for(int i=x;i<=y;i++){
		for(int j=i;j<=y;j++){
			result=i^j;
			if(result>max){
				max=result;
			}
		}
	}
	return max;
}
