#include <stdio.h>


struct student
{
	char name[20];
	int id;
	int grade;
};
void fill_10structs (struct student *ptr);
void print_10structs (struct student *ptr);
int main(void)
{
	struct student ptr[10];
	fill_10structs(ptr);
	print_10structs(ptr);
}
void fill_10structs (struct student *ptr)
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("enter student %d name:- \n",i+1);
		fflush(stdout);
		scanf("%s",((*(ptr+i)).name));
		printf("enter student %d id:- \n",i+1);
		fflush(stdout);
		scanf("%d",&((*(ptr+i)).id));
		printf("enter student %d grade:- \n",i+1);
		fflush(stdout);
		scanf("%d",&((*(ptr+i)).grade));
	}
}
void print_10structs (struct student *ptr)
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("student %d name is :- %s\n",i+1,(*(ptr+i)).name);
		printf("student %d id is :- %d\n",i+1,(*(ptr+i)).id);
		printf("student %d grade is:- %d\n",i+1,(*(ptr+i)).grade);
	}
}

