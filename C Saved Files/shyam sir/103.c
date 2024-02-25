#include<stdio.h>
void main()
{
	int i,n1,n2,a[100],b[100],c[100];
	printf("enter n1=");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		printf("enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("enter n2=");
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	{
		printf("\n enter b[%d]=",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<n2;i++)
	{
		c[i+n1]=b[i];
	}
	for(i=0;i<n1+n2;i++)
	{
		printf("\nc[%d]=%d",i,c[i]);
	}
}
