#include<stdio.h>
void add(int a,int b)
{
	printf("Addition of given 2 numbers is %d\n",a+b);
}
void sub(int x,int y)
{
	printf("Substracting number 2 from number 1 gives %d\n",x-y);
}
void mul(int a,int b)
{
	printf("Product of given 2 numbers is %d\n",a*b);
}
void div(int p,int q)
{
	printf("Dividing number 1 by number 2 gives %d\n",p/q);
}
main()
{

	int a,b;
	printf("Enter number 1\n");
	scanf("%d",&a);
	printf("Enter number 2\n");
	scanf("%d",&b);

		add(a,b);
		sub(a,b);
		mul(a,b);
		div(a,b);
}
