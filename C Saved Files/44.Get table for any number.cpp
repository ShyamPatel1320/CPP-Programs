#include<stdio.h>
main()
{
	int a,x;
	printf("Which number's table do you want?\n");
	scanf("%d",&a);
	for(x=1;x<=10;x++)
	{
		printf("%d * %d = %d\n",a,x,a*x);
	}
}
