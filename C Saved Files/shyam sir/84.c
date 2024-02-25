#include<stdio.h>
void main()
{
	int a,b,x,y,z,w;
	char op;
	do
	{
	fflush(stdin);
	printf("\n press + for add., \n press - for sub.,\n press * for mul.,\n press / for div.,\n enter e for exit,\n enter op=");
	scanf("%c",&op);
	if(op=='+')
	{
		printf("enter a=");
		scanf("%d",&a);
		printf("enter b=");
		scanf("%d",&b);
		x=a+b;
		printf("%d",x);
	}
	else if(op=='-')
	{
		printf("enter a=");
		scanf("%d",&a);
		printf("enter b=");
		scanf("%d",&b);
		y=a-b;
		printf("%d",y);
	}
	else if(op=='*')
	{
		printf("enter a=");
		scanf("%d",&a);
		printf("enter b=");
		scanf("%d",&b);
		z=a*b;
		printf("%d",z);
	}
	else if(op=='/')
	{
		printf("enter a=");
		scanf("%d",&a);
		printf("enter b=");
		scanf("%d",&b);
		w=a/b;
		printf("%d",w);
	}
	else if(op=='e')
	{
		printf("bye");
	}
	else 
	{
		printf("wronge entery");
	}
	}while(op!='e');
}
