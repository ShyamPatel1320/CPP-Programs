#include<stdio.h>
void main()
{
	int i,j,n,x;
	printf("enter no=");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
	x=n;
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=n;j>=i;j--)
		{
			printf("%d",i);
		}
		x--;
		printf("\n");
	}
}

