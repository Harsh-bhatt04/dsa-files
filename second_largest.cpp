#include<stdio.h>
int main()
{
	int n,a[100],i,j,temp=0;
	
	printf("enter the size of the array:");
	scanf("%d",&n);
	
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("the largest element are: %d %d",a[0],a[1]);
return 0;
}

