#include<stdio.h>
main()
{
	int x;
	printf("Enter any number\n");
	scanf("%d",&x);
	if(x>0)
	{
		printf("Given number is positive");
	}
	if(x<0)
	{
		printf("Given number is negative");
	}
	if(x==0)
	{
		printf("Given number is zero");
	}
}
