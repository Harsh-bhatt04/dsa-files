
#include<stdio.h>
int main()
{
	int num,rem=0,temp=0;
	
	printf("enter the number :");
	scanf("%d",&num);
	
	while(num!=0)
	{
		rem=num%10;
		temp=rem+10*temp;
		num/=10;
	}
	printf("the reverse is :%d",temp);

return 0;
}

