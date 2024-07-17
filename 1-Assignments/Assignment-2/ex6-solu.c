#include <stdio.h>

void lower_to_upper(char x);

int main(void)
{
	char x;
	printf("Enter the character\n");
	fflush(stdout);
	scanf("%c",&x);
	lower_to_upper(x);

}

void lower_to_upper(char x){
	if(x>='a' && x<='z')
	{
		printf("Capital character is:- %c", (x-32));
	}
	else
	{
		printf("Invalid input");
	}

}

