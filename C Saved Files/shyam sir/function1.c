#include<stdio.h>
void table()
{
	int i,n,b,c;
	printf("enter n=");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n%d*%d=%d",n,i,n*i);
	}
}
void max2()
{
	int a,b;
	printf("\nenter a=");
	scanf("%d",&a);
	printf("\n enter b=");
	scanf("%d",&b);
	if(a>b)
	{
		printf("a is max");
	}
	else
	{
		printf("b is max");
	}
}
void modn()
{
	int i,n1,n2;
	printf("\n enter n1=");
	scanf("%d",&n1);
	for(i=1;i<=n1;i++)
	{
		printf("\n%d",i);
	}
	printf("enter n2=");
	scanf("%d",&n2);
	for(i=1;i<=n1;i++)
	{
		if(i%n2==0)
		{
			printf("\n%d",i);
		}
	}
}
void main()
{
	int ch;
	do
	{
	printf("\n press 1 for table \n press 2 for max2  \n press 3 for modn \n press 4 for exit \n enter ch=");
scanf("%d",&ch);
    if(ch==1)
    {
		table();
	}
	else if(ch==2)
	{
		max2();
	}
	else if(ch==3)
	{
		modn();
	}
	else if(ch==4)
	{
		printf("bye");
	}

	else
	{
		printf("wronge entery");
	}
	}while(ch!=4);
}
