#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i=0,j,k,l,r1,r2,c1,c2,m,n,o,p;
	printf("enter the row and column of 1st matrix:");
	scanf("%d %d",&r1,&c1);
	printf("enter the elements :\n");
	while(i<r1)
	{
		j=0;
		while(j<c1)
		{
			scanf("%d",&a[i][j]);
			j++;
		}
		i++;
	}
	printf("enter the row and column of 2nd matrix:");
	scanf("%d %d",&r2,&c2);
	printf("enter the elements :\n");
	while(k<r2)
	{
		l=0;
		while(l<c2)
		{
			scanf("%d",&b[i][j]);
			l++;
		}
		k++;
	}	
	c[10][10]=0;
	while(m<r1)
	{
	
		while(n<c1)
		{
			c[m][n]+=a[m][n]+b[m][n];
			n++;
		}
		
		m++;
	}
	printf("\n the addition of the matrix is:\n");
	while(o<r1)
	{
		p=0;
		while(p<c1)
		{
			printf("%d",c[o][p]);
			printf("\t");
			p++;
		}
		printf("\n");
		o++;
		
	}	 
return 0;
}

