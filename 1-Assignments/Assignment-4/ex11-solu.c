#include <stdio.h>
#include<string.h>

void bits_swap (  int *ptr);

int main(void)
{
  int num=0xa4c3f872;
bits_swap(&num);
printf("number after swap is:- %x",num);
}

void bits_swap (int *ptr)
{
	 short *ptr1=(short*)ptr;
	 short temp;
	temp=ptr1[1];
	ptr1[1]=ptr1[0];
	ptr1[0]=temp;
}

