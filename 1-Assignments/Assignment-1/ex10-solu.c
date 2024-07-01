#include <stdio.h>
int main(){
	float num1,num2,result;
	char operation;
		printf("Enter the operation (+ or – or * or /) \n");
		fflush(stdout);
		scanf("%c",&operation);
		fflush(stdout);
		printf("Enter the num1\n");
		fflush(stdout);
		scanf("%f",&num1);
		printf("Enter the num2\n");
		fflush(stdout);
		scanf("%f",&num2);
		switch(operation){
		case '+':
			result=num1+num2;
			break;
		case '-':
			result=num1-num2;
			break;
		case '*':
			result=num1*num2;
			break;
		case '/':
			result=num1/num2;
			break;
		default:
		printf("Invalid operation");
		  return 0;
		}
		printf("%.2f %c %.2f =%.2f",num1,operation,num2,result);
  return 0;
}
