#include<stdio.h>
void main()
{
	int i,n,m=1;
	printf("enter n=");
	scanf("%d",&n);
	i=n;
	do
	{
		m=m*i;
		printf("*%d",i);
		i=i-1;
	}
	while(i>=1);
	printf("=%d",m);
}
