#include<stdio.h>
void main()
{
	int i,n,a[100];
	
	printf("\nEnter limit =>");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the value of a[%d]=>",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nValues\n");
	
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
}
