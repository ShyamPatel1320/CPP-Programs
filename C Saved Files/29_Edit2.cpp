#include<stdio.h>
main()
{
	int maths,english,science;
	printf("Enter marks in Maths\n");
	scanf("%d",&maths);
	printf("Enter marks in English\n");
	scanf("%d",&english);
	printf("Enter marks in Science\n");
	scanf("%d",&science);
	if(maths<35 || english<35 || science<35)
	{
		printf("Student is fail");
	}
	else
	{
		printf("Student is pass");
	}
}
