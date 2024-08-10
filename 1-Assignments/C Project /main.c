/*
 * main.c
 *
 *  Created on: Aug 9, 2024
 *      Author: Moham
 */

#include "student.h"

int main (void){
	int choice,temp1;
	struct student temp;
	while(1)
	{
		printf("**********************************************\n");
		display_menu();
		printf("Enter Choice : ");
		fflush(stdout);
		scanf(" %d",&choice);
		printf("**********************************************\n");
		fflush(stdout);
		switch(choice)
		{
		case 1:
			printf("Enter Student ID: ");
			fflush(stdout);
			scanf("%d",&(temp.id));
			printf("Enter name: ");
			fflush(stdout);
			scanf("%s",temp.name);
			printf("Enter age: ");
			fflush(stdout);
			scanf("%d",&(temp.age));
			printf("Enter GPA: ");
			fflush(stdout);
			scanf("%f",&(temp.gpa));
			addStudent(&temp);
			fflush(stdout);
			break;
		case 2:
			displayStudents();
			fflush(stdout);
			break;
		case 3:
			printf("Enter Student ID: ");
			fflush(stdout);
			scanf("%d",&temp1);
			searchStudentByID(temp1);
			break;
		case 4:
			printf("Enter Student ID: ");
			fflush(stdout);
			scanf("%d",&temp1);
			updateStudent(temp1);
			break;
		case 5:
			printf("Enter Student ID: ");
			fflush(stdout);
			scanf("%d",&temp1);
			deleteStudent(temp1);
			break;
		case 6:
			printf("Average GPA: %.2f\n",calculateAverageGPA());
			break;
		case 7:
			searchHighestGPA();
			break;
		case 8:
			printf("Project terminated");
			return 0;
			break;
		default:
			printf("Invalid choice\n");

		}

	}
	return 0;
}

