#include <stdio.h>


int str_length(char *str );

int main(void)
{
	char str[21] ;
	int length;
	printf("enter string of max 20 char :-\n");
	fflush(stdout);
	gets(str);
	length=str_length(str);
	printf("string length is:- %d",length);
}

int str_length(char *str)
{
	int i=0;
	while(str[i]!='\0')
	{

		i++;
	}
	return i;
}
