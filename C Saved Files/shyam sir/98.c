#include<stdio.h>
void main()
{
	int i,n,a[100];
	printf("enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]=>",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\nAfter\n");
	for(i=n-1;i>=0;i--)
	{
		printf("\n %d",a[i]);
	}
}
