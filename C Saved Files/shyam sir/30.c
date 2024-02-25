#include<stdio.h>
void main()
{
	int i,n,c=0,s=0;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n %d",i);
	c++;
	s=s+i;
	}
	printf("\n count=%d sum=%d",c,s);
}
