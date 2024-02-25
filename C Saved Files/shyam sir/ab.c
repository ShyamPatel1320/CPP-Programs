#include<stdio.h>
void main()
{
	int i,j,n;
	char c;
	printf("n=");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=1;j<=i;j++)
		{
		printf(" ");
		}
		for(j=n;j>i;j--)
		{
			printf(" %d",j);
		}
	printf("\n");
	}
}
