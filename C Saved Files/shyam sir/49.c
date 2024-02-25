#include<stdio.h>
void main()
{
	int i,j,n,x;
	printf("enter the value of n=");
	scanf("%d",&n);
	x=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",x);
			x++;
	 	}		
	 	printf("\n");
	}
}
