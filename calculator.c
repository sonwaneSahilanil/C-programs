#include<stdio.h>

void main()
{
	int a,b,option;
	printf("enter first number....");
	scanf("%d", &a);
	printf("enter second number....");
	scanf("%d", &b);
	printf("\n press 1 for addition...");
	printf("\n press 2 for substraction...");
	printf("\n press 3 for multiplication...");
	printf("\n press 4 for division...");
	printf("\n enter your choice");
	scanf("%d", &option);
	switch(option)
	{
		case 1:
			printf("sum = %d", a+b);
			break;
		case 2:
			printf("substraction = %d", a-b);
			break;
		case 3:
			printf("multiplication = %d", a*b);
			break;
		case 4:
			printf("division = %d", a/b);
			break;
			default:
				printf("enter a valid number");	
	}
}
