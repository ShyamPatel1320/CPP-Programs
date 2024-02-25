#include<stdio.h>
void add(int a,int b)
{
printf("\nAdd =  %d",a+b);
}
void sub(int x,int y)
{
printf("\nSub = %d",x-y);	
}
void mul(int a,int b)
{
printf("\nMul = %d",a*b);	
}
void div(int a,int b)
{
printf("\nDiv = %d",a/b);	
}
void main()
{
	int a,b;
	printf("\nenter the value of a=");
	scanf("%d",&a);
	printf("\nenter the value of b=");
	scanf("%d",&b);
	
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
}
