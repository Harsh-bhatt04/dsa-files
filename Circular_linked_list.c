#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
void createCll(void);
void insertfirstCll(void);
void insertlastCll(void);
void insertgivenpCll(void);
void insertgivenvalueCll(void);
void deletefirstCll(void);
void deletegivenpCll(void);
void displayCll(void);
struct Cll
{
	int info;
	struct Cll *next;
}*start;

typedef struct Cll node;
int item;

void main()
{
	int ch;
	printf("\n\nPress 1: To create the CLL.");
	printf("\nPress 2: To insert at first in the CLL.");
	printf("\nPress 3: To insert at last in the CLL.");
	printf("\nPress 4: To insert after a given position in the CLL.");
	printf("\nPress 5: To insert after the given value in the CLL.");
	printf("\nPress 6: To delete at fisrt position in the CLL.");
	printf("\nPress 7: To delete at last position in the CLL.");
	printf("\nPress 8: To delete after a given position in the CLL.");
	printf("\nPress 9: To delete after a given value in the CLL.");
	printf("\nPress 10: To display all the values in the CLL.");
	printf("\nPress 11: To exit from the menu.");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	
	while(ch!=0)
	{
		switch(ch)
		{
			case 1: createCll(); break;
			case 2: insertfirstCll(); break;
			case 3: insertlastCll();break;
			case 4: insertgivenpCll();break;
			case 5: insertgivenvalueCll();break;
			case 6: deletefirstCll();break;
			case 7: deletelastCll();break;
			case 8: deletegivenpCll(); break;
		/*	case 9: deletegivenvalCll();break;*/
			case 10: displayCll();break;
			case 11: exit(0);
			default: printf("\n!!!! Wrong Choince Entered!!!!"); 
		};
		main();
		
	}
	
}


void createCll()
{
	node *create;
	printf("\nEnter new node value:");
	scanf("%d",&item);
	create=(node*)malloc(sizeof(node));
	if(create==NULL)
	{
		printf("Memory not available!!!");
	}
	else
	{
		create->info=item;
		create->next=create;
		start=create;
		printf("\nList is created successfully...");
		
	}
}


void insertfirstCll()
{
	node *first,*temp;
	printf("\nEnter new node value:");
	scanf("%d",&item);
	first=(node*)malloc(sizeof(node));
	if(first==NULL)
	{
		printf("Memory not available!!!");
	}
	else
	{
		first->info=item;
		first->next=first;
    }
   	if(start==NULL)
   	{
   		start=first;
		printf("\nList is created inserted of insertion...");
	}
	else
	{
		temp=start;
		while(temp->info!=start)
		{
			temp=temp->next;
		}
		temp->next=start;
		first->next=start;
		start=first;
		printf("\nNode is inserted at first position.");
	}
	}
	
	
		
	void insertlastCll()
	{
	node *last,*temp;
	printf("\nEnter new node value:");
	scanf("%d",&item);
	last=(node*)malloc(sizeof(node));
	if(last==NULL)
	{
		printf("Memory not available!!!");
	}
	else
	{
		last->info=item;
		last->next=last;
    }
   	if(start==NULL)
   	{
   		start=last;
		printf("\nList is created inserted of insertion...");
	}
	else
	{
		temp=start;
		while(temp->next!=start)
		{
		temp=temp->next;
		}
		temp->next=last;
		last->next=start;
		printf("\n%d Node is inserted at last position succesfully..",last->info);	
		}
		
	}
	
	
	void insertgivenpCll()
	{
	node *givenp,*temp,*prev;
	int pos;
	printf("\nEnter new node value:");
	scanf("%d",&item);
	printf("\nEnter the position after which you want to insert the node:");
	scanf("%d",&pos);
	givenp=(node*)malloc(sizeof(node));
	if(givenp==NULL)
	{
		printf("Memory not available!!!");
	}
	else
	{
		givenp->info=item;
		givenp->next=givenp;
    }
   	if(start==NULL)
   	{
   		start=givenp;
		printf("\nList is created inserted of insertion...");
	}
	else
	{ 
	int c=0;
		temp=start;
		while(c!=pos)
		{
		prev=temp;
		temp=temp->next;
		c++;
		}
	    prev->next=givenp;
		givenp->next=temp;
		printf("\n%d Node is inserted after given position succesfully..",givenp->info);	
		}
	}
	
	
void insertgivenvalueCll()
	{
	node *givenv,*temp,*prev;
	int value;
	printf("\nEnter new node value:");
	scanf("%d",&item);
	printf("\nEnter the node value after which you want to insert the node:");
	scanf("%d",&value);
	givenv=(node*)malloc(sizeof(node));
	if(givenv==NULL)
	{
		printf("Memory not available!!!");
	}
	else
	{
		givenv->info=item;
		givenv->next=givenv;
    }
   	if(start==NULL)
   	{
   		start=givenv;
		printf("\nList is created inserted of insertion...");
	}
	else
	{ 
		temp=start;
		while(temp->info!=value)
		{
		prev=temp;
		temp=temp->next;
		}
	    prev->next=givenv;
		givenv->next=temp;
		printf("\n%d Node is inserted after given position succesfully..",givenv->info);	
		}
	}	
	
void deletefirstCll()
{
	node *temp,*temp2;
	if(start==NULL)
	{
		printf("!!! List is Empty you cannot delete any node !!!");
	}
	else
	{
		temp=temp2=start;
		while(temp->next!=start)
		{
			temp=temp->next;
		}
		temp->next=start->next;
		start=start->next;
		printf("\n %d is deleted from the single linked list.");
		free(temp2);
	}
}	
	
void deletelastCll()
{
	node *temp,*prev;
	if(start==NULL)
	{
		printf("\n !!!List is Empty, Deletion cannot be done. !!!");
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			prev=temp;
			temp=temp->next;
		}
		prev->next=start;
		printf("\n%d is deleted from the Single Linked List.", temp->info);
		free(temp);
	}
}


void deletegivenpCll()
{
	node *temp,*prev;
	int pos;
	printf("\n Enter the position after which you want to delete the node:");
	scanf("%d",&pos);
	if(start==NULL)
	{
		printf("\n !!! List is empty, deletion cannot be done. !!!");
	}
	else
	{ int c=0;
		temp=start;
		while(c!=pos)
		{
			prev=temp;
			temp=temp->next;
			c++;
		}
		prev->next=temp->next;
		printf("%d is deleted from the given position.",temp->info);
		free(temp);
	}
}



void deletegivenvalueCll()
{
	node *temp,*prev;
	int value;
	printf("\n Enter the node value after which you want to delete the element:");
	scanf("%d",&value);
	if(start==NULL)
	{
		printf("\n !!! List is empty, deletion cannot be done. !!!");
	}
	else
	{
		temp=start;
		while(temp->info!=value)
		{
			prev=temp;
			temp=temp->next;
			
		}
		prev=temp;
		temp=temp->next;
		prev->next=temp->next;
		printf("%d is deleted from the given position.",temp->info);
		free(temp);
	}
}


void displayCll()
{
	
	node *temp;
	if(start==NULL)
	{
		printf("!!! List is empty can't print any value !!!'");
	}
	else
	{
	printf("\n Single list values are as follows:\n");
	temp=start;
	while(temp->next!=start)
	{
	 printf("%d==>",temp->info);
	 temp=temp->next;	
	}
	printf("%d==>",temp->info);
	}
}
