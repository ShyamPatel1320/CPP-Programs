#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	printf("enter the value of c=");
	scanf("%d",&c);
	if(a>b)
	{
	   if(b>c)
	   {
	   	printf("a is max");
	   }
	   	else
		{
		printf("c is max");
	   }
	   
	}
	{
		if(b<c)
		{
			printf("c is max");
		}
		else
		{
			printf("b is max");
		}
		}
	}

