#include<stdio.h>
void square1(int x)
{
	printf("Square of the greater number(%d) is %d\n",x,x*x);
}
void square2(int y)
{
	printf("Square of the smaller number(%d) is %d\n",y,y*y);
}
int max(int a,int b) // we can also return char. Just change data type of variable and function that returns the value of number from int to char.
{
	if(a>b)
	{
		return a;	
	}
	else if(b>a)
	{
		return b;
	}
	else
	{
		printf("Both numbers are same\n");
		return b;
	}
}
int min(int a,int b)
{
	if(a<b)
	{
		return a;	
	}
	else if(b<a)
	{
		return b;
	}
	else
	{
		return b;
	}
}
main()
{
	int a,b,m,n;
	printf("Enter number 1\n");
	scanf("%d",&a);
	printf("Enter number 2\n");
	scanf("%d",&b);
	m=max(a,b);
	n=min(a,b);
	printf("Max = %d\n",m);
	printf("Min = %d\n",n);
	square1(m);
	square2(n);
}
