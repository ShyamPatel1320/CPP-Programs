#include<stdio.h>
main()
{
	int x;
	printf("Enter any number\n");
	scanf("%d",&x);
	if(x>=0)
	{
		if(x==0) // == is a comparision operator whereas = is an assignment operator. This is a nested if.
		{
			printf("Given number is zero");
		}
		else
		{
			printf("Given number is positive");
		}
	}
	else
	{
		printf("Given number is negative");
	}
}
