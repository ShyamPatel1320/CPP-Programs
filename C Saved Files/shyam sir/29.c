#include<stdio.h>
void main()
{
	int n,i,c=0,s=0;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%7==0)
		{
			printf("\n%d",i);
			c++;
			s=s+i;
		}
	}
	printf("\nSum = %d Count = %d",s,c);
}
