#include<stdio.h>
main()
{
	int a,i,j;
	printf("How many rows of stars with one more star in each do you want?\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
