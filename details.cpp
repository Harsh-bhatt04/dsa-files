//write a c program to input your roll no. name marks,percentage and phone numbers and print it.
#include<stdio.h>
int main()
{

	int roll_number,marks,phone_number;
	float percentage;
	char name[10];
	
	printf("enter the name");
	scanf("%s",&name);
	
	printf("enter roll number :");
	scanf("%d",&roll_number);
	
	printf("enter the Phone number :");
	scanf("%d",&phone_number);
	
	printf("enter the percentage :");
	scanf("%f",&percentage);
	
	printf("enter the marks :");
	scanf("%d",&marks);
	
	printf("%s\n%d\n%d\n%f\n%d",name,roll_number,phone_number,percentage,marks);

return 0;
}

