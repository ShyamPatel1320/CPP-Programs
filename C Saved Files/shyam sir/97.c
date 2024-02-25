#include<stdio.h>
void main()
{
	int n,a[100],i;
	printf("enter the value of n=>");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]=>",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]*-1);
	}
}
