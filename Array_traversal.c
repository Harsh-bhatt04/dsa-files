#include<stdio.h>
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
	printf("enter the elements of array :");
	
	for(j=0;j<n;j++)
	{
		scanf("%d",&array[j]);
	}
	display(array,n);
return 0;
}

