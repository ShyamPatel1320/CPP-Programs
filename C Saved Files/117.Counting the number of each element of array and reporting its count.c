// Program incomplete
#include<stdio.h>
#include<string.h>
main()
{
	int n,i,c=0,flag=0;
	char array[200];
	printf("Total how many numbers should the array contain?\n");
	scanf("%d",&n);
	printf("Give all the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	i=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(array[i]==array[j])
			{
				flag=1;
			}
			if()
			{
				
			}
		}
	}
}
