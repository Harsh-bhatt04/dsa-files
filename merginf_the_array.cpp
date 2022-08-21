#include<stdio.h>
int main()
{
	int n,array1[15],array2[15],i;
	printf("enter the size of the array :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&array1[i]);
	}
	printf("the elements of the second array is :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array2[i]);
	}
	int n3=2*n;
	int array3[n3];
	int j=0;
	for(i=0;i<n3;i++)
	{
		
		if(i<n)
		{
			array3[i]=array1[i];
		}
		else
		{
			array3[i]=array2[j];
			j++;
		}
	}
	printf("the new array is :");
	for(i=0;i<n3;i++)
	{
		printf(" %d ",array3[i]);
	}
	
return 0;
}

