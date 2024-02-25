#include<stdio.h>
void main()
{
	int i,j,n,x;
	printf("enter n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	x=1;
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=n;j>=i;j--)
		if(i%2==0)
		{
			printf("%d",x);
			x++;
		}
		else
		{
			printf("*");
		}
		printf("\n");
	}
}
