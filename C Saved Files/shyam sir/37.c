#include<stdio.h>
void main()
{
	int i,n,s=0;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%7==0)
		{
			printf("+%d",i);
			s=s+i;
		}
	}
	printf("\n sum=%d",s);
}
