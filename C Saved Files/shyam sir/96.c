#include<stdio.h>
void main()
{
	int n,a[100],i,c=0,x;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter a[%d]=>",i);
		scanf("%d",&a[i]);
	}
	printf("enter the value for count=");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
	if(a[i]==x)
	{
		printf("\n %d",a[i]);
		c++;
	}
}
	printf("\n count=%d",c);
}
