#include<stdio.h>
#include <stdlib.h>
#define max 4
void display(int top);
struct stack{
	int stk[max];
	int Top;
}s;
void main()
{
	int ch;
	s.Top=-1;
	printf("____Implementation of Stack using Array____\n\n");
	printf("************** Menu List **************\n");
	menu: printf(" 1.push operation");
	printf("\n 2.pop operation");
	printf("\n 3.display operation");
	printf("\n 4.peek operation");
	printf("\n 5.exit operation\n");
	printf("\nenter your choice :");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: 	s.Top=push(s.Top);break;
		case 2: 	s.Top=pop(s.Top);break;
		case 3:		display(s.Top);break;
		case 4:		s.Top=peek(s.Top);break;
		case 5:  	exit(0);break;
		default :printf("\ninvalid input...\n");	
	}
	goto menu;
	
}
void display(int top) {
	int i;
   if(top>=0) {
      printf("\nStack elements are: ");
      for(i=top; i>=0; i--)
      printf(" %d ",s.stk[i]);
      printf("\n");
   } 
   else
   printf("\nStack is empty\n");
}
int isfull(int top)
{
	if(top==max-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isempty(int top)
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int push(int top)
{
	int item;
	if(isfull(top))
	{
		printf("\n!!! stack is overflow...!!!\n\n");
	}
	else
	{
		printf("\nenter the new value for stack:");
		scanf("%d",&item);
		top=top+1;
		s.stk[top]=item;
		printf("\n%d is inserted successfully...\n",s.stk[top]);
		return (top);
	}
}
int pop(int top)
{
	if(isempty(top))
	{
		printf("\nThe operation is not possible because stack is empty\n");
	}
	else
	{
		top=top-1;
		printf("\nelement is poped successfully...\n");
		return top;
	}
}
int peek(int top)
{
	int p=s.stk[top];
	printf("\n%d is the topmost element of the stack..\n");
	return p;
}
