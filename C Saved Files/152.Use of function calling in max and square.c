#include<stdio.h>
void square(int x)
{
	printf("Square of the greater number(%d) is %d",x,x*x);
}
void max(int a,int b)
{
	if(a>b)
	{
		printf("%d is greater than %d\n",a,b);
		square(a);	
	}
	else if(b>a)
	{
		printf("%d is greater than %d\n",b,a);
		square(b);
	}
	else
	{
		printf("Both numbers are same");
	}
}
main()
{
	int a,b;
	printf("Enter number 1\n");
	scanf("%d",&a);
	printf("Enter number 2\n");
	scanf("%d",&b);
	max(a,b);
}
