#include<stdio.h>
void main()
{
	int i,n,s=0;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("+%d",i*i);
		s=s+i*i;
	}
	printf("\n sum=%d",s);
}
