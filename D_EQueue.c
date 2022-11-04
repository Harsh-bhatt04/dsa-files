#include<stdio.h>
#include<stdlib.h>
struct DEQ{
	int info;
	struct *next,*previous;
}*front,*rear;
//struct DEQ node
void insertion_front()
{
	struct DEQ *insert;
	insert=(node*)malloc(sizeof(node));
	if(insert == NULL)
	{
		printf("\n!!!Overflow!!!");
	}
	else
	{
		int item;
		printf("\nenter the value for the node :");
		scanf("%d",&item);
		insert->info=item;
		insert->next=insert->previous=insert;
		if(front == NULL)
		{
			front=rear=insert;
		}
		else
		{
			 insert->next=front;
			 front->previous=insert;
			 insert->previous=rear;
			 rear->next=insert;
			 front=insert;
		}
		printf("\n%d is inserted successfully in Queue",front->info);
	}
}
void insertion_front()
{
	struct DEQ *insert2;
	insert2=(node*)malloc(sizeof(node));
	if(insert2 == NULL)
	{
		printf("\n!!!Overflow!!!");
	}
	else
	{
		int item;
		printf("\nenter the value for the node :");
		scanf("%d",&item);
		insert2->info=item;
		insert2->next=insert->previous=insert;
		if(rear == NULL)
		{
			front=rear=insert;
		}
		else
		{
			 rear->next=insert;
			 insert2->previous=rear;
			 insert2->next=front;
			 front->previous=insert2;
			 rear=insert;
		}
		printf("\n%d is inserted successfully in Queue",rear->info);
	}
}
void deletion_front()
{
	struct DEQ
}
int main()
{
	int ch;
	printf("\n***** D E- QUEUE *****");
	printf("\n1.Input Restricted\n2.Output restricted");
	printf("\nEnter your chioce:");
	scanf("%d",&ch);
	if(ch == 1)
	{
		int op1;
		printf("\n1.insert_rear\n2.delete_front\n3.delete_rear\n4.display_front\n5.display_rear\n6.exit");
		printf("\nEnter your choice again:");
		scanf("%d",&op1);
		switch(op1)
		{
			case 1:insertion_front();break;
			case 2:deletion_front();break;
			case 3:deletion_rear();break;
			case 4:display_front();break;
			case 5:display_rear();break;
			case 6:exit(0);break;
			default:printf("\n!!!Wrong choice entered!!!");
		}
	}
}
