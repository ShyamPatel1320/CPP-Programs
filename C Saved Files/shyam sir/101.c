#include<stdio.h>
void main()
{
	int i,n,j,a[100];
	int ch=0;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	ch=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>ch)
		{
			ch=a[i];
		}
	}
	printf("%d is greatest",ch);
}
