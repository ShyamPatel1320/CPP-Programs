#include<stdio.h>
main()
{
	int a,i,j;
	printf("Print how many rows of numbers in triangle form?\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
