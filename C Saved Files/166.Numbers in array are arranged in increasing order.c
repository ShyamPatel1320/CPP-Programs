#include<stdio.h>
main()
{
	int i,j,k,m=0,n,array[200];
	printf("How many numbers do you want in array?\n");
	scanf("%d",&n);
	printf("Enter all numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	i=0;
	printf("The value of array in decending order is as follows\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(array[j]>m)
			{
				m=array[j];
				k=j;
			}
		}
		printf("%d\n",m);
		m=0;
		array[k]=0;
	}
}
