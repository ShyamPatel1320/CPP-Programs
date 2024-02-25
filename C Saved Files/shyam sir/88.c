#include<stdio.h>
void main()
{
	int a;
	char n;
	printf("\n s for square,\n c for cube,\n o for odd or even,\n enter n=");
	scanf("%c",&n);
	switch(n)
	{
		case 's':
			printf("enter the value of a=");
			scanf("%d",&a);
			printf("square=%d",a*a);
			break;
		case 'c':
			printf("enter the value of a=");
			scanf("%d",&a);
			printf("cube=%d",a*a*a);
			break;
		case 'o':
			printf("enter the value of a=");
			scanf("%d",&a);
			if(a%2==0)
				{
					printf("even");
				}
			else
				{
					printf("odd");
				}
			break;
			default:
				printf("wronge number");			
	}
}
