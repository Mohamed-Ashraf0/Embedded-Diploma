#include <stdio.h>

#define TRUE 1
#define FALSE 0

int distinct_string(char *str);

int main(void)
{
	char str[21];
	int result;
	printf("enter string of max 20 char :-\n");
	fflush(stdout);
	scanf("%s",str);
	result=distinct_string(str);
	if(result)
	{
	printf("String is distinct");
	}
	else
	{
		printf("String is not distinct");
	}
}

int distinct_string(char *str)
{
	int result =TRUE;
	int i=0,j=0;
	while(result && str[i]!='\0')
	{
		j=i+1;
		while(str[j]!='\0')
		{
			if(str[i]==str[j])
			{
				result=FALSE;
				break;
			}
			j++;
		}
		i++;
	}
	return result;
}

