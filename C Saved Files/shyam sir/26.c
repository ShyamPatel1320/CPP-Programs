#include<stdio.h>
void main()
{
	int n,i;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n %d * %d = %d",n,i,i*n);
	}
}
