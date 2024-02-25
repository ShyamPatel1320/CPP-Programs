#include<stdio.h>
main()
{
	int a,b;
	printf("Enter any value\n");
	scanf("%d",&a);
	printf("Enter another value\n");
	scanf("%d",&b);
	if(a>b)
	{
		printf("%d is greater than %d",a,b);
	}
	if(a<b)
	{
		printf("%d is greater than %d",b,a);
	}
	if(a==b)
	{
		printf("%d and %d are equal in value",a,b);
	}
}
