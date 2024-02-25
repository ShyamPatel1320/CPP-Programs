#include<stdio.h>
main()
{
	int x,km,m;
	printf("Enter value you want to convert to km and m");
	scanf("%d",&x);
	km=x/1000;
	m=x%1000;
	printf("\n%d m = %d km and %d m",x,km,m);
}
/* advanced version of program 3.cpp*/
