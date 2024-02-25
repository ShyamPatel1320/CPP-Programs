#include<stdio.h>
main()
{
	int a,b,c;
	printf("1 = Addition\n");
	printf("2 = Substraction\n");
	printf("3 = Multiplication\n");
	printf("4 = Division\n");
	printf("Enter your choice\n");
	scanf("%d",&a);
	if(a==1)
	{
		printf("Your choice was addition.\n");
		printf("Enter first number\n");
		scanf("%d",&b);
		printf("Enter another number\n");
		scanf("%d",&c); // we are writing these four lines again and again every time. Solution to this problem will be discussed later
		printf("Addition of given numbers is %d",b+c);
	}
	else if(a==2)
	{
		printf("Your choice was substraction.\n");
		printf("Enter first number\n");
		scanf("%d",&b);
		printf("Enter another number\n");
		scanf("%d",&c);
		printf("Substraction of given numbers is %d",b-c);
	}
	else if(a==3)
	{
		printf("Your choice was multiplication.\n");
		printf("Enter first number\n");
		scanf("%d",&b);
		printf("Enter another number\n");
		scanf("%d",&c);
		printf("Multiplication of given numbers is %d",b*c);
	}
	else if(a==4)
	{
		printf("Your choice was division.\n");
		printf("Enter first number\n");
		scanf("%d",&b);
		printf("Enter another number\n");
		scanf("%d",&c);
		printf("Division of given numbers is %d",b/c);
	}
	else
	{
		printf("Invalid choice");
	}
}
