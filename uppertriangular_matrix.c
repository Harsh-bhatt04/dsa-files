#include<stdio.h>
int main()
{
	int array[10][10];
	int i,j,row,coloumn,num;
	
	printf("enter the row :");
	scanf("%d",&row);
	
	printf("enter the coloumn:");
	scanf("%d",&coloumn);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<coloumn;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	printf("The matrix of the elements is :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<coloumn;j++)
		{
			if(i<j)
			{
			
			printf(" 0 ");
			printf(" \t ");
			}
			else
			printf(" %d ",array[i][j]);
		}
		printf("\n");
	}
}
