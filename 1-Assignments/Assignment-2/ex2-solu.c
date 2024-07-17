#include <stdio.h>

void check_alphabet(char x);

int main(void){
	char x;
	printf("Enter the character:-\n");
	fflush(stdout);
	scanf("%c",&x);
	check_alphabet(x);

}

void check_alphabet(char x){
	if((x>='A' && x<='Z') || (x>='a' && x<='z')){
		printf("this character is an alphabet.");
	}
	else
		printf("this character is not an alphabet.");
}

