#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
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
	
	printf("Enter the first element :");
	scanf("%d",&second->data);
	second->next=third;
	
	printf("Enter the first element :");
	scanf("%d",&third->data);
	third->next=fourth;
	
	printf("Enter the first element :");
	scanf("%d\n",&fourth->data);
	fourth->next=NULL; 
	
	listraversal(head);
	
	
return 0;
}

