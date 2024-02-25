#include<stdio.h>
void main()
{
	int x,y,a;
	char op;
	do
	{
		fflush(stdin);
	printf("\npress s for square \npress c for cube \npress o for odd or even,\n press e for exit, op=");
	scanf("%c",&op);
	
		if(op=='s')
		{
			printf("enter a=");
			scanf("%d",&a);
			x=a*a;
			printf("%d",x);
		}
		else if(op=='c')
		{
			printf("enter a=");
			scanf("%d",&a);
			y=a*a*a;
			printf("%d",y);			
		}
		else if(op=='o')
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
		else if(op=='e')
		{
			printf("bye");
		}
		else
		{
			printf("wronge entery");
		}
	}
	while(op!='e');
}
