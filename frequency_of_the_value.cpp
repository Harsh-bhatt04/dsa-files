//write the program to input 10 input in the array and find the frequency of each element
#include<stdio.h>
int main()
{
	int array[50];
	int n,temp=0,i,j;
	
	printf("enter the size of array :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		
		for(j=i+1;j<=n;j++)
	{
		if(array[i]==array[j])
		temp++;
		else 
		temp=1;
		}
		printf("\nthe frequency of %d is :%d ",array[i],temp);
	}
	
return 0;
}

