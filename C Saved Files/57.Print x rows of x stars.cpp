#include<stdio.h>
main()
{
	int a,i,j;
	printf("How many rows of that many stars do you want?\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
