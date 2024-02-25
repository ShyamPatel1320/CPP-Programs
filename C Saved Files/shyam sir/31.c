#include<stdio.h>
void main()
{
	int n,i,a,s=0,c=0;
	printf("enter the value of n=");
	scanf("%d",&n);
	printf("enter the value of a=");
	scanf("%d",&a);
	for(i=1;i<=n;i++)
	{

		if(i%a==0)
		{
		printf("\n %d",i);

		c++;
		s=s+i;
		}
	}
		printf("\n count=%d sum=%d",c,s);
}
