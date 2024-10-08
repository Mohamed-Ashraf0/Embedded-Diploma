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
int find_fifth_node_from_end (void);
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
	printf("%d",find_fifth_node_from_end());
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
int find_fifth_node_from_end (void)
{
	if(head==NULL)
	{
		printf("empty list");
		return 0;
	}
	if(head->next == NULL)
	{
		return head->data;;
	}
	if(size_of_list()>=5){
	struct node *ptr1=head;
	struct node *ptr2=head->next->next->next->next;
	while(ptr2->next!=NULL)
	{
		ptr1=ptr1->next;
		ptr2=ptr2->next;

	}
	return ptr1->data;
	}
	else
	{
		printf("size is less than 5");
		return 0;
	}
}

