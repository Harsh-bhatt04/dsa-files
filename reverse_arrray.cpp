#include<stdio.h>
int main()
{
	int array[10],n,i;
	
	printf("enter the size of array :");
	scanf("%d",&n);
	
	printf("enter the element of array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("the elements of the array are :");
	for(i=n-1;i>=0;i--)
	{
		printf(" %d ",array[i]);
	}

return 0;
}

