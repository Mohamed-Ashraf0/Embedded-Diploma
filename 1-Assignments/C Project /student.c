/*
 * student.c
 *
 *  Created on: Aug 9, 2024
 *      Author: Moham
 */
#include "student.h"

struct node *head =NULL;

void addStudent(const struct student *const ptr)
{
	struct node *current=head;
	//check all student's id
	while(current!=NULL)
	{
		if(ptr->id==current->data.id)
		{
			printf("this ID is already reserved\n");
			return;
		}
		current=current->next;
	}
	//allocate new student node in heap
	struct node *link=(struct node*)malloc(sizeof(struct node));
	//checks if memory allocation fails
	if(link!=NULL){
		link->data=*(ptr);
		//checks if list is empty
		if(head==NULL)
		{
			link->next=NULL;
			head=link;
			return;
		}
		current=head;
		//searching for last element to add new node after it
		while(current->next!=NULL)
		{
			current=current->next;
		}
		link->next=NULL;
		current->next=link;
	}
	else
	{
		printf("memory allocation fails");
	}
}

void displayStudents(void)
{
	//check if list is empty
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	struct node *current=head;
	//printing all students until null
	while(current!=NULL)
	{
		printf("[ ID: %d, Name: %s, Age: %d. GPA: %.2f ]\n"
				,current->data.id,current->data.name
				,current->data.age,current->data.gpa);
		current=current->next;
	}
}

void searchStudentByID(int id)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	struct node *current=head;
	//Searching in all node for id equal to target
	while(current!=NULL)
	{
		if(current->data.id==id)
		{
			printf("[ ID: %d, Name: %s, Age: %d. GPA: %.2f ]\n"
					,current->data.id,current->data.name
					,current->data.age,current->data.gpa);
			return;
		}
		current=current->next;
	}
	printf("Student is not found\n");
}

void updateStudent(int id)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	struct node *current=head;
	//Searching in all node for id equal to target
	while(current!=NULL)
	{
		if(current->data.id==id)
		{
			printf("Enter name: ");
			fflush(stdout);
			scanf("%s",current->data.name);
			printf("Enter age: ");
			fflush(stdout);
			scanf("%d",&(current->data.age));
			printf("Enter GPA: ");
			fflush(stdout);
			scanf("%f",&(current->data.gpa));
			printf("Student details updated\n");
			return;
		}
		current=current->next;
	}
	printf("Student is not found\n");
}

void deleteStudent(int id)
{
	//check if list is empty
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	struct node *delete_node=NULL;
	//check if the target is the head
	if(head->data.id==id)
	{
		delete_node=head;
		head=head->next;
		free(delete_node);
		printf("Student deleted\n");
		return;
	}
	//making 2 pointer to be able to make prev pointer skip deleted one
	struct node *prev=head;
	struct node *current=head->next;
	while(current!=NULL)
	{
		if(current->data.id==id)
		{
			delete_node=current;
			prev->next=current->next;
			free(delete_node);
			printf("Student deleted\n");
			return;
		}
		prev=prev->next;
		current=current->next;
	}
	printf("Student is not found\n");
}

int size_of_list(void)
{
	int size=0;
	struct node *current=head;
	//counting all elements until null
	while(current!=NULL)
	{
		size++;
		current=current->next;
	}
	return size;
}

float calculateAverageGPA(void)
{
	int sum=0;
	if(head==NULL)
	{
		printf("list is empty\n");
		return 0.0;
	}
	struct node *current=head;
	//adding all students gpa until null
	while(current!=NULL)
	{
		sum+=current->data.gpa;
		current=current->next;
	}
	return (float)sum/size_of_list();
}

void searchHighestGPA(void)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	//assume max is first node
	float max=head->data.gpa;
	int id=head->data.id;
	//checking for any gpa greater than max
	struct node *current=head->next;
	while(current!=NULL)
	{
		if(current->data.gpa>max)
		{
			max=current->data.gpa;
			id=current->data.id;
		}
		current=current->next;
	}
	printf("student with the highest GPA :\n");
	searchStudentByID(id);
}

void display_menu(void){
	printf("1. Add Student\n");
	printf("2. Display Student\n");
	printf("3. Search Student by ID\n");
	printf("4. Update Student Information\n");
	printf("5. Delete Student\n");
	printf("6. Calculate Average GPA\n");
	printf("7. Search for Student with Highest GPA\n");
	printf("8. Exit\n");
}
