#include<stdio.h>
void main()
{
	int a,b,c,A,B,C,n;
	printf("enter the marks of hindi=");
	scanf("%d",&a);
	printf("enter the marks of english=");
	scanf("%d",&b);
	printf("enter the marks of maths=");
	scanf("%d",&c);
	n=(a+b+c);
	if(n>=0 && n<=50)
	{
	printf("total=%d grade=C",n);
	}
	else if(n>50 && n<=100)
	{
	printf("total=%d grade=B",n);
	}
	else
	{
	printf("total=%d grade=A",n);
	}
}
