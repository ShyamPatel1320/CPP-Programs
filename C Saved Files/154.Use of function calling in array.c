#include<stdio.h>
void setarray(int x[],int n)
{
	int i;
	printf("Enter all numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
}
void printarray(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",x[i]);
	}
}
void add(int x[],int y[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",x[i]+y[i]);
	}
}
main()
{
	int a[100],b[100],i,n;
	printf("How many numbers do you want in array?\n");
	scanf("%d",&n);
	
	setarray(a,n);
	setarray(b,n);
	
	printf("The printed array 1 has the following sets of numbers\n");
	printarray(a,n);
	
	printf("The printed array 2 has the following sets of numbers\n");
	printarray(b,n);
	
	printf("Sum of the above two arrays is as follows:\n");
	add(a,b,n);
}
