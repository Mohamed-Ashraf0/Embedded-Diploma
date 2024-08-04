#include <stdio.h>


struct student
{
	char str[20];
	int roll;
	int marks;
};

int main(void)
{
	struct student mohamed={"mohamed",3,97};
	printf("student name:%s\nroll:%d\nmarks:%d",mohamed.str,mohamed.roll,mohamed.marks);
}


