#include<stdio.h>
void main()
{
	int a,x,y,z;
	char op;
	printf("\n s is for squar \n c is for cube \n oe is for check oe number");
	scanf("%c",&op);
	switch(op)
	{
			case 's':
	{
			printf("enter the value of a");
			scanf("%d",&a);
			x=a*a;
			printf("answer=%d",x);
			break;
	}
			case 'c':
	{
			printf("enter the value of a");
			scanf("%d",&a);
			y=a*a*a;
			printf("answer=%d",y);
			break;
	}
			case 'o':
	{
			printf("enter the value of a");
			scanf("%d",&a);
			if(a%2==0)
			{
				printf("%d number is even",a);
			}
			else
			{
				printf("%d number is odd",a);				
			}
			break;
	}
	default:
	{
	printf("\n wronge entery");
	}
}
}
