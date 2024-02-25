#include<stdio.h>
main()
{
	int x,f,in;
	printf("Enter value of inches that you want to convert to feet and inches");
	scanf("%d",&x);
	f=x/12;
	in=x%12;
	printf("%d inches = %d feet and %d inches",x,f,in);
}
