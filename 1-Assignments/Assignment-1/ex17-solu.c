#include <stdio.h>
int main()
{
   int num ,x=0;
   printf("Enter the number\n");
   fflush(stdout);
   scanf("%d",&num);
   while((pow(10,x))<num){
	   x++;
   }
   printf("number of digits =%d",x);
    return 0;
}


