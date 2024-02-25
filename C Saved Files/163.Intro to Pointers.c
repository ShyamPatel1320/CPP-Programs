#include<stdio.h>
main()
{
	int a,*b;
	a=50;
	b=&a;
	printf("A = %d B = %u\n",a,*b);
	a=200;
	printf("A = %d B = %d\n",a,*b);
}
