#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n before swap a=%d b=%d",a,b);
	printf("\n after swap a=%d b=%d",b,a);
}
