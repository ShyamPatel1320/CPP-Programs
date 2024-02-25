#include<stdio.h>
void main()
{
	int n,a,b,x,y,z,w;
	do
	{
	printf("\n press 1 for add., \n press 2 for sub.,\n press 3 for mul.,\n press 4 for div.,\n enter n=");
	scanf("%d",&n);
	if(n==1)
	{
		printf("enter a=");
		scanf("%d",&a);
		printf("enter b=");
		scanf("%d",&b);
		x=a+b;
		printf("%d",x);
	}
	else if(n==2)
	{
		printf("enter a=");
		scanf("%d",&a);
		printf("enter b=");
		scanf("%d",&b);
		y=a-b;
		printf("%d",y);
	}
	else if(n==3)
	{
		printf("enter a=");
		scanf("%d",&a);
		printf("enter b=");
		scanf("%d",&b);
		z=a*b;
		printf("%d",z);
	}
	else if(n==4)
	{
		printf("enter a=");
		scanf("%d",&a);
		printf("enter b=");
		scanf("%d",&b);
		w=a/b;
		printf("%d",w);
	}
	else if(n==5)
	{
		printf("bye");
	}
	else 
	{
		printf("wronge entery");
	}
}
	while(n!=5);
}
