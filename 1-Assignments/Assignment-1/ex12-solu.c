#include <stdio.h>
int main(){
	int num , factorial=1;
    printf("Enter the  positive integer \n");
	fflush(stdout);
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		factorial*=i;
	}
	printf("the factorial =%d",factorial);

  return 0;
}


