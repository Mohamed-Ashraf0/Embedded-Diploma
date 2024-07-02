#include <stdio.h>
int main(){
	int num, power, result=1;
	    printf("Enter the number \n");
	    fflush(stdout);
	    scanf("%d", &num);
	    printf("Enter the power \n");
	    fflush(stdout);
	    scanf("%d", &power);
	    for(int i=1;i<=power;i++){
	    	result*=num;
	    }
	    printf("%d power %d =%d",num, power, result);
	    return 0;
}
