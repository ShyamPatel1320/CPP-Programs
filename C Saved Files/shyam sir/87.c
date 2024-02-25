#include<stdio.h>
void main()
{
	int a,b;
	char n;
	printf("\npress + for add.,\npress - for sub.,\n press * for mul.,\n press / for div.");
	printf("\nenter the value of n=");
	scanf("%c",&n);
	switch(n)
	{
		case '+':
			printf("enter a=");
			scanf("%d",&a);
			printf("enter b=");
			scanf("%d",&b);
			printf("\nAdd = %d",a+b);
			break;
		case '-':
			printf("enter a=");
			scanf("%d",&a);
			printf("enter b=");
			scanf("%d",&b);
			printf("\n sub=%d",a-b);
			break;
		case '*':
		    printf("enter a=");
			scanf("%d",&a);
			printf("enter b=");
			scanf("%d",&b);
			printf("\n mul=%d",a*b);	
			break;
		case '/':
			printf("enter a=");
			scanf("%d",&a);
			printf("enter b=");
			scanf("%d",&b);
			printf("\n div=%d",a/b);
			break;	
	default:
		printf("wronge opetion");
	}
}
