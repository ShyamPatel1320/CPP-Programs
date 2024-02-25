#include<stdio.h>
void main()
{
	int i,j,n,x;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		if(x==1)
		{
		printf("0");
		x=0;
		}
		else if(x==0) 
		{
		printf("1");
		x=1;
		}
		}
		printf("\n");
	}
}
