#include<stdio.h>
void inputA();
void inputB();
void addAB(int a[10][10],b[10][10],int c[10][10]);
void display();
int main()
{
	inputA();
	inputB();
	addAB(int a[10][10],b[10][10],int c[10][10]);

return 0;
}
void inputA()
{
	printf("enter the row & col of 1st matrix :");
	scanf("%d %d",&r1,&c1);
	
	printf("enter the elements of the matrix:");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void inputA()
{
	printf("enter the row & col of 1st matrix :");
	scanf("%d %d",&r2,&c2);
	
	printf("enter the elements of the matrix:");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
}
void add()
{
	if(r1!=r2 && c1!=c2)
	{
		printf("operation can not be perforemed !");
	}
	else 
	{
		for (i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				for(k=0;k<c1;k++)
				{
					c[i][j]+=a[i][k]+b[k][j];
				}
			}
		}
	}
	display()
}

