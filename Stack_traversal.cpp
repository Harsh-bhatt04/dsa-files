#include<stdio.h>
#include<stdlib.h>
struct stack{
	int size;
	int top;
	int *array;
};
int empty(struct stack* s)
{
	if(s->top==-1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int full(struct stack* s)
{
	if(s->top==NULL)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int main()
{
	struct stack * s;
	
	s->size= 50;
	s->top= -1;//top will be -1 iff when we assume that -1 will not in our array
	s->array= (int*)malloc(s->size * sizeof(int));
	
	if(empty(s)==1)
	{
		printf("stack is empty");
	}
	else {
		printf("stack is not empty");
	}
	
return 0;
}

