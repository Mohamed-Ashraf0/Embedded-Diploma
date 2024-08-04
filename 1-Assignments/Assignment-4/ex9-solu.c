#include <stdio.h>
#include<string.h>

int main(void)
{
	char str1 [20]="bat",str2[4];
	int size =strlen(str1);
	if(size >= 3)
	{
		str2[0]=str1[size-1];
		str2[1]=' ';
		str2[2]=str1[size-2];
		str2[3]='\0';
		printf("new string is:- %s",str2);
	}
	else
	{
		printf("enter string greater than or equal 3 characters");
	}
}

