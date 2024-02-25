#include<stdio.h>
void main()
{
	int i,j;
	int a[i][j];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter a[i][j]=");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		if(i==j)
		{
			printf("%d",a[i][j]);
		}	
		else
		{
			printf("*");
		}
	
		printf("\n");
	}
}
