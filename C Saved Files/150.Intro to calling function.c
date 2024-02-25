#include<stdio.h>
void add()
{
	int a,b;
	printf("For addition,enter number 1\n");
	scanf("%d",&a);
	fflush(stdin);
	printf("Enter number 2\n");
	scanf("%d",&b);
	fflush(stdin);
	printf("Addition of given 2 numbers is %d\n",a+b);
}
void sub()
{
	int a,b;
	printf("For substraction,enter number 1\n");
	scanf("%d",&a);
	fflush(stdin);
	printf("Enter number 2\n");
	scanf("%d",&b);
	fflush(stdin);
	printf("Substracting number 2 from number 1 gives %d\n",a-b);
}
void mul()
{
	int a,b;
	printf("For multiplication,enter number 1\n");
	scanf("%d",&a);
	fflush(stdin);
	printf("Enter number 2\n");
	scanf("%d",&b);
	fflush(stdin);
	printf("Product of given 2 numbers is %d\n",a*b);
}
void div()
{
	int a,b;
	printf("For division,enter number 1\n");
	scanf("%d",&a);
	fflush(stdin);
	printf("Enter number 2\n");
	scanf("%d",&b);
	fflush(stdin);
	printf("Dividing number 1 by number 2 gives %d\n",a/b);
}
main()
{
	add();
	sub();
	mul();
	div();
}
