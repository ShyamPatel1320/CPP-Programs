#include<stdio.h>
void main()
{
	int i,n;
	printf("enter n=");
	scanf("%d",&n);
	i=1;
	do
	{
		printf("\n%d*%d=%d",n,i,n*i);
		i++;
	}
	while(i<=10);
}
