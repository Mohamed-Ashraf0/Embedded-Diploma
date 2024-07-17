#include <stdio.h>

float operation(char x ,float y ,float z,int *error);

int main(void)
{
	char op;
	float first_num,second_num,result;
	int error=0;
	printf("Enter the first num ,operation ,second num:-\n");
	fflush(stdout);
	scanf("%f %c %f",&first_num ,&op ,&second_num);
	result=operation(op,first_num,second_num,&error);
	if(!error){
		printf("result =%.2f",result);
	}
	else
	{
		printf("Invalid operation");
	}
    return 0;
}

float operation(char x ,float y ,float z,int *error){
	float result;
	switch (x)
	{
	case '+':
		result=y+z;
		break;
	case '-':
		result=y-z;
		break;
	case '*':
		result=y*z;
		break;
	case '/':
		if(z!=0)
		{
			result=y/z;
		}
		else
		{
			*error=1;
		}
		break;
	default:
		*error=1;
		break;
	}
	return result;
}

