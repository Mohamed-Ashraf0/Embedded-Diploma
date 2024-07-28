#include <stdio.h>


void upper_to_lower(char *str);

int main(void)
{
	char str[21];
	printf("enter string of max 20 char :-\n");
	fflush(stdout);
	scanf("%s",str);
	upper_to_lower(str);
	printf("lower case string is:- %s",str);
}

void upper_to_lower(char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]+=32;
		}
		i++;
	}
}
