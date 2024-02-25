#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter any value\n");
	scanf("%d",&a);
	printf("Enter second value\n");
	scanf("%d",&b);
	printf("Enter third value\n");
	scanf("%d",&c);
	if(a>=b && a>=c)
	{
		printf("Maximum value out of all entered values is %d",a);
	}
	else if(b>=c)
	{
		printf("Maximum value out of all entered values is %d",b);
	}
	else
	{
		printf("Maximum value out of all entered value is %d",c);
	}
}

