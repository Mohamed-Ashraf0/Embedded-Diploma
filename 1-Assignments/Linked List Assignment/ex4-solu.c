#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *head=NULL;

void insert_at_top (int data);
void insert_at_last (int data);
int size_of_list (void);
void print_list (void);
void insert_element(int pos ,int data);
int find_middle_node (void);
int find_fifth_node_from_end (void);
int sum_of_node (void);
int main(void)
{
	insert_at_last(11);
	insert_at_last(3);
	insert_at_last(10);
	insert_at_last(50);
	insert_at_last(23);
	insert_at_last(5);
	insert_at_last(60);
	print_list();
	printf("\n");
	printf("sum of list is:- %d",sum_of_node());
}

void insert_at_top (int data)
{
	struct node *link=(struct node*)malloc(sizeof(struct node));
	link->data=data;
	link->next=head;
	head=link;
}
void insert_at_last (int data)
{
	struct node *link=(struct node*)malloc(sizeof(struct node));
	link->data=data;
	link->next=NULL;
	if(head==NULL)
	{
		head=link;
		return;
	}
	struct node *ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=link;
}
int size_of_list (void)
{
	int size=0;
	struct node *ptr=head;
	while(ptr!=NULL)
	{
		size++;
		ptr=ptr->next;
	}
	return size;
}
void print_list (void)
{
	struct node *ptr=head;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
int sum_of_node (void)
{
	int sum=0;
	struct node *ptr=head;
	while(ptr!=NULL)
	{
		sum+=ptr->data;
		ptr=ptr->next;
	}
	return sum;
}

