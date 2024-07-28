#include <stdio.h>


void remove_all_except_alphabet(char *str);

int main(void)
{
	char str[21];
	printf("enter string of max 20 char :-\n");
	fflush(stdout);
	scanf("%s",str);
	remove_all_except_alphabet(str);
	printf("only alphabet string is:- %s",str);
}

void remove_all_except_alphabet(char *str)
{
	int i=0,j=0;
	while(str[i]!='\0')
	{
		if(!((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')))
		{
			j=i;
			while(str[j]!='\0')
			{
				str[j]=str[j+1];
				j++;
			}
		}
		i++;
	}
}

