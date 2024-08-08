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
	printf("%d",find_middle_node());
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
void insert_element(int pos ,int data)
{
	if(head==NULL)
	{
		printf("list is empty");
		return;
	}
	if(pos>size_of_list())
	{
		printf("index not found");
		return;
	}
	int i;
	struct node *ptr_prev=head;
	struct node *ptr_current=ptr_prev->next;
	struct node *link=(struct node*)malloc(sizeof(struct node));
	link->data=data;
	if(pos==0)
	{
		link->next=head;
		head=link;
		return;
	}
	//to move current to passed position
	for(i=1;i<pos;i++)
	{
		ptr_prev=ptr_prev->next;
		ptr_current=ptr_current->next;
	}
	ptr_prev->next=link;
	link->next=ptr_current;
}
int find_middle_node (void)
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
	struct node *ptr1=head;
	struct node *ptr2=head;
	int x=0;
	while(ptr1!=NULL)
	{
		ptr1=ptr1->next;
		x++;
		if(x==2)
		{
			ptr2=ptr2->next;
			x=0;
		}
	}
	return ptr2->data;
}
