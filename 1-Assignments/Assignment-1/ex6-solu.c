#include <stdio.h>
int main(){
	int num1,num2;
	printf("Enter the num1\n");
	fflush(stdout);
	scanf("%d",&num1);
	printf("Enter the num2\n");
	fflush(stdout);
	scanf("%d",&num2);
	if(num1>num2)
		printf("num1 is greater than num2\n");
	else if(num1<num2)
	    printf("num2 is greater than num1\n");
	else
		printf("num1 is equal to num2\n");
  return 0;
}
