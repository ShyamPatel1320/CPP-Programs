#include<stdio.h>
main()
{
	int x=0,y=0,n;
	printf("Enter any number\n");
	scanf("%d",&n);
	while(n>0)
	{
		x=n%10;
		y=y*10+x;
		n=n/10;
	}
	printf("Reverse of the given number is %d",y);
}
