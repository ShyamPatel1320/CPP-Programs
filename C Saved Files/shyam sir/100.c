#include<stdio.h>
void main()
{
	int n,i,a[100];
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			printf("\n %d",a[i]);
		}
	}
}
