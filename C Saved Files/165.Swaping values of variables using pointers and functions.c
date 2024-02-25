#include<stdio.h>
void swaping(int *x,int *y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
}
int main()
{
	int a,b;
	printf("Give first number\n");
	scanf("%d",&a);
	printf("Give second number\n");
	scanf("%d",&b);
	printf("Before swaping, value of first variable is %d and of second variable is %d\n",a,b);
	swaping(&a,&b);
	printf("After swaping, value of first variable now is %d and of second variable is %d\n",a,b);
}
