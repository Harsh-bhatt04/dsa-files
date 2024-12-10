#include<stdio.h>
#include<stdlib.h>
struct SLL
{
	int info;
	struct SLL* next;
}*start;
typedef struct SLL node;

void createSLL()
{
	node* create;
	int item;
	printf("enter the value for the node:");
	scanf("%d",&item);
	create=(node*)malloc(sizeof(node));
	if(create==NULL)
	{
		printf("\nMemory not Available!");
	}
	else
	{
		create->info=item;
		create->next=NULL;
		start=create;
		printf("\nSingle linked list created..");
	}
}
void insertfirstSLL()
{
	node *first;
	int item;
	printf("enter the value for the first node:");
	scanf("%d",&item);
	first=(node*)malloc(sizeof(node));
	if(first==NULL)
	{
		printf("\nMemory not Available!");
	
	}
	else
	{
		first->info=item;
		first->next=NULL;
		if(start==NULL)
		{
			start=first;
			printf("\nlist was empty so list is created..\n");
		}
		else
		{
			first->next=start;
			start=first;
			printf("\nNode is insert @ 1st position...\n");
		}
	}
	
}
void insertlastSLL()
{
	node *last,*temp;
	int item;
	printf("\nEnter any value for the last node:");
	scanf("%d",&item);
	last=(node*)malloc(sizeof(node));
	if(start==NULL)
	{
		printf("\nMemory not Available!");
	}
	else
	{
		last->info=item;
		last->next=NULL;
		
		if(start==NULL)
		{
			start=last;
			printf("\nlist was empty so list is created..\n");
		}
		else
		{
			temp=start;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=last;
			printf("\nNode is inseted @ last position...\n");
		}
	}
}
void insertgivenpSLL()
{
	node *gpos,*prev,*temp;
	int item,pos,c=0;
	printf("\nEnter the value for the position:");
	scanf("%d",&item);
	printf("\nenter the position where you want to insert the node:");
	scanf("%d",&pos);
	gpos=(node*)malloc(sizeof(node));
	if(gpos==NULL)
	{
		printf("\nMemory not Available!");
	}
	else
	{
		gpos->info=item;
		gpos->next=NULL;
		
		if(start==NULL)
		{
			start=gpos;
			printf("\nlist was empty so list is created..\n");
		}
		else
		{
			while(c!=pos)
			{
				prev=temp;
				temp=temp->next;
			}
			prev->next=gpos;
			gpos->next=temp;
			printf("\nNode is inserted after the given position successfully..\n");
		}
	}
}
void deletefirst_sll()
{
	node *temp;
	if(start==NULL)
	{
	printf("\n list is empty");
	}
	else
	{
	temp=start;
	start=start->next;
	printf("\n%d is deleted from the first position",tem->info);
	free(temp);
	}
}
void 

int main()
{
	int choice;
	printf("\n Press:1 to create the linked list");
	printf("\n Press:2 to insert node at first index");
	printf("\n Press:3 to insert node between linked list");
	printf("\n Press:4 to insert node at last");
	printf("\n Press:5 to insert node at given position");
	printf("\n Press:6 to insert node at given value position");
	printf("\n enter the choice:");
	scanf("%d",&choice);
	
	while(choice!=99)
	{
		switch(choice)
		{
			case 1:createSLL();break;
			case 2:insertfirstSLL();break;
			//case 3:insertbetweenSLL();break;
			case 4:insertlastSLL();break;
			case 5:insertgivenpSLL();break;
			//case 6:insertgivenvalueSLL();break;
			default:printf("Invalid Choice !!!");
		};
		main();
	}	
}
