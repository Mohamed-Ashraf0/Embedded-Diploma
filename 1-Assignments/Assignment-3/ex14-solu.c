#include <stdio.h>
#include<string.h>

void reverse_string(char *str);

int main(void)
{
	char str[21];
	printf("enter string of max 20 char :-\n");
	fflush(stdout);
	scanf("%s",str);
	reverse_string(str);
	printf("reversed string is:- %s",str);
}

void reverse_string(char *str)
{
	int size=strlen(str);
	char temp;
	for(int i=0;i<size/2;i++)
	{
		temp=str[i];
		str[i]=str[size-1-i];
		str[size-1-i]=temp;
	}
}

