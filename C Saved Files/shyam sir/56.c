#include<stdio.h>
void main()
{
	int i,j,n,x;
	printf("enter n=");
	scanf("%d",&n);
	x=n;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		printf("%d",x);
		x--;
	printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		printf("%d",i);
		printf("\n");
	}
}
