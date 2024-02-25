#include<stdio.h>
main()
{
	int a,b,c;
	do
	{
		printf("Which operation off the following do you want to perform?\n");
		printf("Choose:\n1 for Addition\n2 for Substraction\n3 for Multiplication\n4 for Division\n5 to exit program\n\n");
		scanf("%d",&a);
			if(a==1)
			{
				printf("Enter first number\n");
				scanf("%d",&b);
				printf("Enter second number\n");
				scanf("%d",&c);
				printf("Addition of given numbers is %d\n\n",b+c);
			}
			else if(a==2)
			{
				printf("Enter first number\n");
				scanf("%d",&b);
				printf("Enter second number\n");
				scanf("%d",&c);
				printf("Substraction of given numbers is %d\n\n",b-c);
			}
			else if(a==3)
			{
				printf("Enter first number\n");
				scanf("%d",&b);
				printf("Enter second number\n");
				scanf("%d",&c);
				printf("Multiplication of given numbers is %d\n\n",b*c);
			}
			else if(a==4)
			{
				printf("Enter first number\n");
				scanf("%d",&b);
				printf("Enter second number\n");
				scanf("%d",&c);
				printf("Division of given numbers is %d\n\n",b/c);
			}
	}while(a!=5);
	printf("The program has ended");
}
