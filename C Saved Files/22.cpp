#include<stdio.h>
main()
{
	int x,y;
	x=10;
	printf("%d",x);
	y=x++;
	printf("\n%d %d",x,y);
	y=++x;
	printf("\n%d %d",x,y);
}
