#include<stdio.h>
main()
{
	int maths,english;
	printf("Enter marks in Maths\n");
	scanf("%d",&maths);
	printf("Enter marks in English\n");
	scanf("%d",&english);
	if(maths>=35 && english>=35)
	{
		printf("Student is pass");
	}
	else
	{
		printf("Student is fail");
	}
}
