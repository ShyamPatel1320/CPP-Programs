#include<stdio.h>
main()
{
	int a,i,j,x=1;
	printf("How many rows do you want to print?\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				printf("* ");
			}
			else
			{
				printf("%d ",i);
			}
		}
		printf("\n");
	}
}
