#include<stdio.h>
main()
{
	int a,b,n,*ptr1,*ptr2;
	ptr1=&a;
	ptr2=&b;
	printf("Enter value 1\n");
	scanf("%d",&a);
	printf("Enter value 2\n");
	scanf("%d",&b);
	printf("The addition is %d\n",*ptr1+*ptr2);
	printf("The substraction is %d\n",*ptr1-*ptr2);
	printf("The multiplication is %d\n",*ptr1**ptr2);
	printf("The division is %d",*ptr1/ *ptr2);
}
