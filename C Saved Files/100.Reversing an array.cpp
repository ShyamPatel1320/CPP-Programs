#include<stdio.h>
main()
{
	int n,i,a[100];
	printf("How many numbers do you want in array?\n");
	scanf("%d",&n);
	printf("Enter the values for first array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The reverse of this array is as follows\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}
