#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of b\n");
	scanf("%d",&b);
	printf("Value of a is %d and value of b is %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nAfter swaping the values of a and b, value of a is %d and value of b is %d",a,b);
}
