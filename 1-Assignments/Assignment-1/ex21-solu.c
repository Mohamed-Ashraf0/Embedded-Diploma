#include <stdio.h>
int main()
{
	int row ;
	printf("Enter number of rows: \n");
	fflush(stdout);
    scanf("%d",&row);
    for(int i=1 ;i<=row;i++){
    	for(int j=1 ;j<=row;j++){
    		if(j==i || j==row-i+1 ){
    			printf(" *");
    		}
    		else
    			printf(" ");
    	}
    	printf("\n");
    }
	return 0;
}
