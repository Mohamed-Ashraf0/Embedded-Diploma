#include <stdio.h>

#define SIZE 10

int main(void)
{
	int size=0;
char str[SIZE]="HELLO";
char *ptr=str;
while(*ptr!='\0')
{
	size++;
	ptr++;
}
printf("size of the string is:- %d",size);
}

