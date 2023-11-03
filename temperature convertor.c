/* C program to convert celsius to fahrenheit and vise versa. */

#include<stdio.h>
void main()
{
	float fh,cl;
	int ch;
	printf("\n 1. convert temp from fahrenheit to celcius.");
	printf("\n 2. convert temp from celsius to fahrenheit.");
	printf("\n enter your choice:");
	scanf("%d", &ch);
	if (ch==1)
	{
		printf("\n enter the temp in fahrenheit:");
		scanf("%f", &fh);
		cl=(fh-32)/1.8;
		printf("temp in celcius : %f:", cl);
	}
	else if(ch==2)
	{
		printf("\n enter the temp in celsius:");
		scanf("%f", &cl);
		fh=(cl*1.8)+32;
		printf("temp in fahrenheit:%f:", fh);
	}	
	else
	{
		printf("\n invalid choice");
	}		
}
