#include <stdio.h>
int main(){
	int num ;
    printf("Enter the  positive integer \n");
	fflush(stdout);
	scanf("%d",&num);
    if(num <2){
    	printf("%d is not a prime number",num);
    	return 0;
    }
	for(int i=2;i<num;i++){
		if(num%i==0){
			printf("%d is not a prime number",num);
			return 0;
		}
	}
	printf("%d is  a prime number",num);

  return 0;
}

