#include <stdio.h>
#include<string.h>

void concatenate_string(char *str1,char *str2);

int main(void)
{
	char str1[41],str2[21];
	printf("enter string of max 20 char :-\n");
	fflush(stdout);
	gets(str1);
	printf("enter string of max 20 char :-\n");
	fflush(stdout);
	gets(str2);
	concatenate_string(str1,str2);
	printf("concatenated string is:- %s\n",str1);
}

void concatenate_string(char *str1,char *str2)
{
	int size1=strlen(str1);
	int size2=strlen(str2);
	int i,j;
	for(i=size1,j=0;i<size1+size2;i++,j++)
	{
		str1[i]=str2[j];
	}
	str1[i]='\0';
}
