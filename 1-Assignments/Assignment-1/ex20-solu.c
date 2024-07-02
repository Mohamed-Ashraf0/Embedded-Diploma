#include <stdio.h>
int main()
{
	int row , column ,temp_c1 ,temp_c2;

	printf("Enter number of rows: \n");
	fflush(stdout);
    scanf("%d",&row);
    column=1+2*(row-1);
    for(int i=0 ;i<row;i++){
    	temp_c1=(column/2)+1-i;
    	temp_c2=(column/2)+1+i;
    	for(int j=1 ;j<=column;j++){
    		if(j>=temp_c1 & j<=temp_c2)
    			printf("*");
    		else
    			printf(" ");
    	}
    	printf("\n");
    }
	return 0;
}

