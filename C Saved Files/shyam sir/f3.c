#include<stdio.h>
int max2(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
void square(int x)
{
	printf("\n square=%d",x*x);
}

void main()
{
		int a,b,c,x;
		printf("\nenter a=");
		scanf("%d",&a);
		printf("\nenter b=");
		scanf("%d",&b);
		c=max2(a,b);
		printf("\n max value=%d",c);
		square(c);
}
