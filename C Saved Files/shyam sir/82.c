#include<stdio.h>
void main()
{
	int n,x,y,a;
	do
	{
	printf("\npress 1 for square \npress 2 for cube \npress 3 for odd or even \n n=");
	scanf("%d",&n);
	
		if(n==1)
		{
			printf("enter a=");
			scanf("%d",&a);
			x=a*a;
			printf("%d",x);
		}
		else if(n==2)
		{
			printf("enter a=");
			scanf("%d",&a);
			y=a*a*a;
			printf("%d",y);			
		}
		else if(n==3)
		{
			printf("enter a=");
			scanf("%d",&a);
			if(a%2==0)
			{
			printf("%d even",a);
			}
			else
			{
				printf("%d odd",a);
			}
		}
		else if(n==4)
		{
			printf("bye");
		}
		else
		{
			printf("wronge entery");
		}
	}
	while(n!=4);
}
