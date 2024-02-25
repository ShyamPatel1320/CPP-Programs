#include<stdio.h>
main()
{
	int c,n,x,y; // The entered number must be in the range of int data type or else it will automatically take garbage value and do the operation.
	printf("Give any number\n");
	scanf("%d",&n);
	x=n%10;
	while(n>=1)
	{
		y=n;
		n=n/10;
	}
	printf("The sum of first and last digits of the number is %d",y+x);
}
