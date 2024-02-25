#include<stdio.h>
main()
{
	int n,i=0;
	printf("Till where do you want to print the numbers?\n");
	scanf("%d",&n);
	printf("The numbers are as follows:\n");
	do
	{
		printf("%d\n",i+1);
		i++;
	}while(i<n);
}
