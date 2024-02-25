#include<stdio.h>
main()
{
	int m,n,i,j,a[100][100],b[100][100];
	printf("How many rows are needed in matrix?\n");
	scanf("%d",&m);
	printf("How many columns are needed in matrix?\n");
	scanf("%d",&n);
	printf("Give matrix 1\n");
	for(i=0;i<m;i++)
	{
		printf("Enter values for row %d\n",i+1);
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Give matrix 2\n");
	for(i=0;i<m;i++)
	{
		printf("Enter values for row %d\n",i+1);
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Multiplication of matrices is as follows\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j]);
		}
		printf("\n");
	}
}
