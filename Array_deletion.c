#include<stdio.h>

void del(int arr[],int size,int index)
{
	int i;
	printf("\nEnter the index from which you want to delet the elemenent :");
	scanf("%d",&index);
	for(i=index;i<size-1;i++)
	{
		arr[i]=arr[i+1];
	}
}
void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nPrinted array is :%d",arr[i]);
	}
}

int main()
{
	int array[50];
	int n,j;

	printf("enter the size of an array :");
	scanf("%d",&n);	
	printf("\nenter the elements of array :");
	
	for(j=0;j<n;j++)
	{
		scanf("%d",&array[j]);
	}
	display(array,n);
	
	//after inserting the element in the array
	int index,size=n;
	
	//printf("\nEnter the element you want to insert in the array :");
	//scanf("%d",&element);
	
	/*	insert(array,size,element,50,index);
	size=size+1;
	display(array,size);*/
	
	del(array,size,index);
	size-=1;
	display(array,size);
	
	
return 0;
}

