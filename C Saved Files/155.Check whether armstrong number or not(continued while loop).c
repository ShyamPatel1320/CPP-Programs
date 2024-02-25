#include<stdio.h>
main()
{
	int b,n,x=0,y=0;
	printf("Enter any number\n");
	scanf("%d",&n);
	b=n;
	while(n>0)
	{
		x=n%10;
		y=y+(x*x)*x;
		n=n/10;
	}
	if(y==b)
	{
		printf("Entered number is an Armstrong Number");
	}
	else
	{
		printf("Entered number is not an Armstrong Number");
	}
}
