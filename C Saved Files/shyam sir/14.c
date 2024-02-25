#include<stdio.h>
void main()
{
	int a,b,x,y,z,w,op;
	printf("\n press 1 for add \n press 2 for sub \n press 3 for multi \n press 4 for divi \n enter number=");
	scanf("%d",&op);
	if(op==1)
	{
		printf("enter the value of a=");
		scanf("%d",&a);
		printf("enter the value of b=");
		scanf("%d",&b);
		x=a+b;
		printf("\n add of a and b=%d",x);	
	}
	else if(op==2)
	{
		printf("enter the value of a=");
		scanf("%d",&a);
		printf("enter the value of b=");
		scanf("%d",&b);
		y=a-b;
		printf("\n sub. of a and b=%d",y);
	}
	else if(op==3)
	{
		printf("enter the value of a=");
		scanf("%d",&a);
		printf("enter the value of b=");
		scanf("%d",&b);
		z=a*b;
		printf("\n add. of a and b=%d",z);
	}
	else if(op==4)
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
