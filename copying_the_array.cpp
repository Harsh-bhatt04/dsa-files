#include<stdio.h>
int main()
{
	int array1[15],array2[15],n,i,n2;
	
	printf("enter the size of the array :");
	scanf("%d",&n);
	
	printf("enter the element of the array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array1[i]);
	}
	n2=n;
	for(i=0;i<n2;i++)
	{
		array2[i]=array1[i];
	}
	printf("the new array is :");
	for(i=0;i<n2;i++)
	{
		printf("%d",array2[i]);
	}
return 0;
}

