#include<stdio.h>
main()
{
	int x;
	printf("Enter any value\n");
	scanf("%d",&x);
	if(x>=0)
	{
		printf("Absolute value of %d is %d",x,x);
	}
	if(x<0)
	{
		printf("Absolute value of %d is %d",x,-x);
	}
}

