#include<stdio.h>
main()
{
	int n,i,j,k=0,a[100],c[100],d=0;
	printf("How many numbers do you need in array?\n");
	scanf("%d",&n);
	printf("Enter values for first array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array of prime numbers is as follows\n");
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		{
		}
		else
		{
			for(j=2;j<a[i];j++)
			{
				if(a[i]%j==0 || a[i]==1)
				{
					d=1;
					break;
				}
			}
			if(d==0)
			{
				c[k]=a[i];
				printf("%d\n",c[k]);
				k++;
			}
			d=0;
		}
	}	
}
