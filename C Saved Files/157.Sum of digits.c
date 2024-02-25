#include<stdio.h>
main()
{
	int s=0,x=0,n;
	printf("Enter any number\n");
	scanf("%d",&n);
	while(n>0)
	{
		s=s+n%10;
		n=n/10;
	}
	printf("Sum of digits of the given number is %d",s);
}
