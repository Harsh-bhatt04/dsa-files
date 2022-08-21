#include<stdio.h>
int main()
{
	int array[10][10],i,j,arr2[10][10],row,col;
	
		printf("enter the row :");
	scanf("%d",&row);
	
	printf("enter the coloumn:");
	scanf("%d",&col);
	
	printf("enter the element of the array:");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf(" %d ",&array[i][j]);
			
		}
	
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			arr2[j][i]=array[i][j];
			
		}
	}
	printf("the array is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %d ",array[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	printf("the transposed array is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %d ",arr2[i][j]);
			printf("\t");
			
		}
		printf("\n");
	}
return 0;
}

