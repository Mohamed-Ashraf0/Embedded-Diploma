#include <stdio.h>
#include <string.h>

typedef union family_name
{
	char  first_name[30];
	char  last_name[30];
}family_name;

int main(void)
{
	family_name x;
	strcpy(x.first_name,"Mohamed");
	printf("last name :- %s\n",x.last_name);
	printf("size of union is:- %d",sizeof(family_name));
}



