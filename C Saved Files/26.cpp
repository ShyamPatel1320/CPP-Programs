#include<stdio.h>
main()
{
	int x;
	printf("Given any number\n");
	scanf("%d",&x);
	if(x==0)
	{
		printf("Given number is zero");
	}
	else
	{
		if(x%2==0)
		{
			printf("Parity of given number is even");
		}
		else
		{
			printf("Parity of given number is odd");
		}
	}
}
