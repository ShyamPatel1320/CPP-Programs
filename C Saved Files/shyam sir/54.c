#include<stdio.h>
void main()
{
	int i,j,n,x;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	x=1;
		for(j=n;j>=i;j--)
		{
			printf("%d",x);
			x++;
		}
		printf("\n");	
	}
}
