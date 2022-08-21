#include<stdio.h>
int insert(int arr[],int n,int element,int capacity,int index)//this all arguments are needed for array insertion
{
	int i;
	if(n>=capacity)
	{
		return -1;
	}
	printf("\nEnter the index where you want to insert the element :");
	scanf("%d",&index);
	for (i=n-1;i>=index;i--)
	{
		arr[i+1]=arr[i];
	}
	
	arr[index]=element;
	return 1;
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
	int element,index,size=n;
	
	printf("\nEnter the element you want to insert in the array :");
	scanf("%d",&element);
	
	insert(array,size,element,50,index);
	size=size+1;
	
	display(array,size);
	
return 0;
}

