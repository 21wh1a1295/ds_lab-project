#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front;
struct node *rear;
void insert();
void delete();
void display();
void main()
{
	int choice;
	while(choice!=4)
	{
		printf("\n1.insert an element\n2.delete an element\n3.display\n4.exit");
		printf("\n enter your choice:");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1 :insert();
				break;
			case 2 :delete();
		      		break;
		  	case 3 :display();
	      			break;
	  		case 4 :exit(0);
			default :printf("\n enter valid choice:");
		}
	}
}
void insert()
{
	struct node *ptr;
	int item;
	ptr=(struct node *)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("\nOVERFLOW\n");
	}
	else
	{
		printf("\n enter value:\n");
		scanf("%d",&item);
		ptr->data=item;
		if(front==NULL)
		{
			front=ptr;
			rear=ptr;
			front->next=NULL;
			rear->next=NULL;
		}
		else
		{
			rear->next=ptr;
			rear=ptr;
			rear->next=NULL;
		}
	}
}
void delete()
{
	struct node *ptr;
	if(front==NULL)
	{
		printf("\nUNDERFLOW\n");
	}
	else
	{
		ptr=front;
		front=front->next;
		free(ptr);
	}
}
void display()
{
	struct node *ptr;
	ptr=front;
	if(front==NULL)
	{
		printf("\nempty queue");
	}
	else
	{
		printf("\n printing values...");
			while(ptr!=NULL)
			{
				printf("\n %d", ptr->data);
				ptr=ptr->next;
			}
	}
}
