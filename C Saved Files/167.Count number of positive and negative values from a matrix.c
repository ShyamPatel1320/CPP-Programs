#include<stdio.h>
main()
{
	int m,b,i,j,a[100][100],p=0,n=0,z=0;
	printf("How many rows are needed in matrix?\n");
	scanf("%d",&m);
	printf("How many columns are needed in matrix?\n");
	scanf("%d",&b);
	for(i=0;i<m;i++)
	{
		printf("Enter values for row %d\n",i+1);
		for(j=0;j<b;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	i=0;
	printf("Matrix is as follows\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	i=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<b;j++)
		{
			if(a[i][j]>0)
			{
				p++;
			}
			else if(a[i][j]<0)
			{
				n++;
			}
			else
			{
				z++;
			}
		}
	}
	printf("Positive numbers = %d\n",p);
	printf("Negative numbers = %d\n",n);
	printf("Zeroes = %d\n",z);
}
