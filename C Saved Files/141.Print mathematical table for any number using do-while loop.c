#include<stdio.h>
main()
{
	int n,i=0;
	printf("Which letters' table do you want to print?\n");
	scanf("%d",&n);
	printf("The table is as follows:\n");
	do
	{
		printf("%d x %d = %d\n",n,i+1,n*(i+1));
		i++;
	}while(i<10);
}
