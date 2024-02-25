#include<stdio.h>
void main()
{
int i,n,k=0,m=0,a[100],b[100],c[100];
printf("enter n=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("enter a[%d]=",i);
	scanf("%d",&a[i]);
}
	for(i=0;i<n;i++)
	{
	if(a[i]%2==0)
	{
		b[k]=a[i];
		k++;
	}
	else
	{
		c[m]=a[i];
		m++;
	}
}
for(i=0;i<k;i++)
{
	printf("\nb[%d]=%d",i,b[i]);
}
for(i=0;i<m;i++)
{
	printf("\nc[%d]=%d",i,c[i]);
}
}
