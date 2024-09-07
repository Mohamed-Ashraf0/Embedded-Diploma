/*
 * student.h
 *
 *  Created on: Aug 9, 2024
 *      Author: Moham
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <stdio.h>
#include <stdlib.h>

struct student
{
	int id; //student id
	char name[50]; //student name
	int age; //student age
	float gpa; //student GPA
};
//linked list
struct node
{
	struct student data;
	struct node *next;
};


void addStudent(const struct student *const ptr);

void displayStudents(void);

void searchStudentByID(int id);

void updateStudent(int id);

float calculateAverageGPA(void);

void searchHighestGPA(void);

void deleteStudent(int id);

void display_menu(void);


#endif /* STUDENT_H_ */
