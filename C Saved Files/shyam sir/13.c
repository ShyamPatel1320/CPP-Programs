#include<stdio.h>
void main()
{
	int a,x,y,n,op;
	
	printf("\nEnter 1 for square\nenter 2 for cube\nEnter 3 for oddeven\nEnter =>");
	scanf("%d",&op);
	
	if(op==1)
	{
		printf("enter the value of a=");
		scanf("%d",&a);
		x=a*a;
		printf("\n squar is=%d",x);
	}
	else if(op==2)
	{
		printf("enter the value of a=");
		scanf("%d",&a);
		y=a*a*a;
		printf("\n cube is=%d",y);
	}
	else if(op==3)
	{
		printf("enter the value of a=");
		scanf("%d",&a);
		if(a%2==0)
		{
			printf("\n %d is even",a);
		}
		else
		{
			printf("\n %d is odd",a);
		}
	}
	else
	{
		printf("\nWrong opt");
	}
}
