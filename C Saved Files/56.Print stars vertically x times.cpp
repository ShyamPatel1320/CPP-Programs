#include<stdio.h>
main()
{
	int a,i;
	printf("How many times do you want stars to be printed vertically?\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		printf("*\n");
	}
}
