#include<stdio.h>
main()
{
	int b,x=0,y=0,n;
	printf("Enter any number\n");
	scanf("%d",&n);
	b=n;
	while(n>0)
	{
		x=n%10;
		y=y*10+x;
		n=n/10;
	}
	if(b==y)
	{
		printf("The number is a palindrome");
	}
	else
	{
		printf("The number is not a palindrome");
	}
}
