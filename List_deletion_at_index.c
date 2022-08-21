#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* delet_at_index(struct node*head,int index)
{
	struct node*p= head;
	struct node*q= head->next;
	int i;
	for(i=0;i<index-1;i++)
	{
		p=p->next;
		q=q->next;
	}
	p->next=q->next;
	free(q);
	
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
	
	
	printf("\nBefore deletion !\n");
	listraversal(head);
	int index;
	printf("\nEnter the index from where you want to delet the element :");
	scanf("%d",&index);
	head= delet_at_index(head,index);
	printf("\nAfter deletion !\n");
	listraversal(head);
	
	
	
return 0;
}

