#include<stdio.h>
main()
{
	int a,i,j;
	printf("Print different pattern upto how many lines?\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2!=0)
			{
				printf("1 ");	
			}
			else
			{
				printf("0 ");
			}			
		}
		printf("\n");
	}
}

