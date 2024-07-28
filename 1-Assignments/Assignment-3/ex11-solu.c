#include <stdio.h>


int char_freq(char *str ,char target);

int main(void)
{
	char str[21] , target;
	int frequency;
	printf("enter string of max 20 char :-\n");
	fflush(stdout);
	scanf("%s",str);
	printf("enter the target :-\n");
	fflush(stdout);
	scanf(" %c",&target);
	frequency=char_freq(str,target);
	printf("char '%c' is repeated %d times",target,frequency);
}

int char_freq(char *str,char target)
{
	int i=0,freq=0;
	while(str[i]!='\0')
	{
		if(str[i]==target)
		{
			freq++;
		}
		i++;
	}
	return freq;
}
