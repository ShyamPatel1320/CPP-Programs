#include<stdio.h>
void main()
{
	int n,i,s=0,c=0;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=2;i<=n;i=i+2)
	{
		printf("\n %d is even",i);
		c++;
		s=s+i;
	}
	printf("\n count=%d sum=%d",c,s);
}
