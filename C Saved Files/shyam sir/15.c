#include<stdio.h>
void main()
{
	int a,b,x,y,z,w;
	char op;
	printf("\n press + for add \n press - for sub \n press * for multi \n press / for divi \n enter number=");
	scanf("%c",&op);
	if(op=='+')
	{
		printf("enter the value of a=");
		scanf("%d",&a);
		printf("enter the value of b=");
		scanf("%d",&b);
		x=a+b;
		printf("\n add of a and b=%d",x);	
	}
	else if(op=='-')
	{
		printf("enter the value of a=");
		scanf("%d",&a);
		printf("enter the value of b=");
		scanf("%d",&b);
		y=a-b;
		printf("\n sub. of a and b=%d",y);
	}
	else if(op=='*')
	{
		printf("enter the value of a=");
		scanf("%d",&a);
		printf("enter the value of b=");
		scanf("%d",&b);
		z=a*b;
		printf("\n add. of a and b=%d",z);
	}
	else if(op=='/')
	{
		printf("enter the value of a=");
		scanf("%d",&a);
		printf("enter the value of b=");
		scanf("%d",&b);
		w=a/b;
		printf("\n div. of a and b=%d",w);
	}
	printf("\n wronge opition");
}
