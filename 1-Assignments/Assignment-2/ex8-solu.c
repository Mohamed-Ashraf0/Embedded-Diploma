#include <stdio.h>

void prime_num(int x ,int y);

int main(void)
{
	int num1,num2;
	printf("Enter the first number ,second number\n");
	fflush(stdout);
	scanf("%d %d",&num1 ,&num2);
	prime_num(num1,num2);

}

void prime_num(int x ,int y){
	int flag;
	for(int i=x;i<=y;i++){
		flag=1;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				flag=0;
				break;
			}

		}
		if(flag && i>1){
			printf("%d \n",i);
		}
	}
}
