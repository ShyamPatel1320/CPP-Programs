#include<stdio.h>
main()
{
	int m,n,i,j,a[100][100];
	printf("How many rows are needed in matrix?\n");
	scanf("%d",&m);
	printf("How many columns are needed in matrix?\n");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		printf("Enter values for row %d\n",i+1);
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix is as follows\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				printf("%d ",a[i][j]);
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}
