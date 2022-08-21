#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* insert_between(struct node*head,int data,int index)
{
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	struct node*p=head;
	int i=0;
	
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	
	return head;
}
void listraversal(struct node* pointer){
	while(pointer!=NULL)
	{
		printf("The element of list :%d\n",pointer->data);
		pointer=pointer->next;
	}
}
int main()
{
	struct node* head;
	struct node* second;
	struct node* third;
	struct node* fourth;
	
	head=(struct node*)malloc(sizeof(struct node));//dynamic memory allocation in heap
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	fourth=(struct node*)malloc(sizeof(struct node));

	printf("Enter the first element :");
	scanf("%d",&head->data);
	head->next=second;
	
	printf("Enter the second element :");
	scanf("%d",&second->data);
	second->next=third;
	
	printf("Enter the third element :");
	scanf("%d",&third->data);
	third->next=fourth;
	
	printf("Enter the fourth element :");
	scanf("\n%d",&fourth->data);
	fourth->next=NULL; 
	
	
	printf("\nBefore Insertion !\n");
	listraversal(head);
	
	int element,index;
	
	printf("\nEnter the element that you want to insert :");
	scanf("%d",&element);
	
	printf("\nEnter the index where you want to insert :");
	scanf("%d",&index);
	
	head= insert_between(head,element,index);
	printf("\nAfter insertion between !\n");
	listraversal(head);
	
	
	
return 0;
}

