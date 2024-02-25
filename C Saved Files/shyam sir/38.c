#include<stdio.h>
void main()
{
	int i,n,f=1;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("*%d",i);
		f=f*i;
	}
	printf("\n factorial=%d",f);
}
