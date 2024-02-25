#include<stdio.h>
void main()
{
	int i,n,a[100],b[100];
	printf("enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("enter b[%d]",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n %d",b[i]);
	}
}
