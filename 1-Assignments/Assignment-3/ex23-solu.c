#include <stdio.h>
#include <string.h>

#define SIZE 26

char alphabet[SIZE+1]="abcdefghijklmnopqrstuvwxyz";

void char_freq(char *str ,int *frequency);

int main(void)
{

	char str[21];
	int frequency[SIZE]={0};
	printf("enter string of max 20 char :-\n");
	fflush(stdout);
	gets(str);
	char_freq(str,frequency);
	printf("frequency of characters is:-\n");
	for(int i=0;i<SIZE;i++)
	{
		printf("the char %c is repeated %d times\n",alphabet[i],frequency[i]);
	}
}

void char_freq(char *str,int *frequency)
{
	int i,j,size=strlen(str);
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<size;j++)
		{
			if(str[j]==alphabet[i])
			{
				frequency[i]++;
			}
		}
	}
}
