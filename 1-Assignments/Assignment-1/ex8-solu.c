#include <stdio.h>
#include <math.h>
int main(){
	int num ,root;
	printf("Enter the num\n");
	fflush(stdout);
	scanf("%d",&num);
	root=sqrt(num);
	     if(num==root*root)
	        printf("%d  is a perfect square\n",num);
	     else
	        printf("%d  is not a perfect square",num);
    //Another solution :
    /*
     for(int i=1;;i++)
    {
    	if(pow(i,2)==num){
    		printf("%d  is a perfect square\n",num);
    		break;}
    	if(pow(i,2)>num){
    	    printf("%d  is not a perfect square",num);
    	    break;}
    }
    */
  return 0;
}
