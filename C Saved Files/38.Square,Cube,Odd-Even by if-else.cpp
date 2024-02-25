#include<stdio.h>
main()
{
	int a,x;
	printf("Enter 1 for square\nEnter 2 for cube\nEnter 3 for odd-even\n");
	scanf("%d",&x);
	
	if(x==1)
	{
		printf("You chose square operation\n");
		printf("Enter any number\n");
		scanf("%d",&a);
		printf("Square of %d is %d",a,a*a);
	}
	else if(x==2)
	{
		printf("You chose cube operation\n");
		printf("Enter any number\n");
		scanf("%d",&a);
		printf("Cube of %d is %d",a,(a*a)*a);
	}
	else if(x==3)
	{
		printf("You chose odd-even operation\n");
		printf("Enter any number\n");
		scanf("%d",&a);
		if(a%2==0)
		{
			printf("%d is even",a);	
		}
		else
		{
			printf("%d is odd",a);
		}
	}
	else
	{
		printf("Given number is invalid");
	}
}
