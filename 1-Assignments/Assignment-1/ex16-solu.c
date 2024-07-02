#include <stdio.h>
int main()
{
   int num ,rev_num,temp,x=0;
   printf("Enter the number\n");
   fflush(stdout);
   scanf("%d",&num);
   while((pow(10,x))<num){
	   x++;
   }
   for(int i=1;i<=x;i++){
	   temp=num*pow(10,-(x-i));
	   rev_num+=temp*pow(10,i-1);;
	   num-=temp*pow(10,(x-i));
   }
   printf("reversed number =%d",rev_num);
    return 0;
}
