#include <stdio.h>
int main()
{
	int row , column ,temp_r1 ,temp_r2;

	printf("Enter number of rows: \n");
	fflush(stdout);
    scanf("%d",&row);
    column=1+2*(row-1);
    for(int i=0 ;i<row;i++){
    	temp_r1=(column/2)+1-i;
    	temp_r2=(column/2)+1+i;
    	for(int j=1 ;j<=column;j++){
    		if(j>=temp_r1 & j<=temp_r2)
    			printf("*");
    		else
    			printf(" ");
    	}
    	printf("\n");
    }
	return 0;
}

