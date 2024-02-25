#include<stdio.h>
void main()
{
	int a,b,x,y,z,s;
	char op;
	printf("\n press + for add \n press - for sub \n press * for multi \n press / for sub \n enter number");
	scanf("%c",&op);
	switch(op)
	{
	case '+':
		{
		printf("enter the number of a=");
		scanf("%d",&a);
		printf("enter the number of b=");
		scanf("%d",&b);
		x=a+b;
		printf("add = %d",x);
		break;
		}
	case '-':
	    {
	    printf("enter the number of a=");
		scanf("%d",&a);
		printf("enter the number of b=");
		scanf("%d",&b);
		y=a-b;
		printf("sub = %d",y);
		break;
		}
	case '*':
		{
		printf("enter the number of a=");
		scanf("%d",&a);
		printf("enter the number of b=");
		scanf("%d",&b);
		z=a*b;
		printf("multi= %d",z);
		break;
		}
	case'/':
		{
		printf("enter the number of a=");
		scanf("%d",&a);
		printf("enter the number of b=");
		scanf("%d",&b);
		s=a/b;
		printf("div= %d",s);
		break;
		}
		default:
			printf("\n wronge entery");
	}
}
