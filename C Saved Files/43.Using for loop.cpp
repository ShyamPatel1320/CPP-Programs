#include<stdio.h>
main()
{
	int i,x;
	printf("How many numbers and their squares do you want to print?\n");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		printf("%d-%d\n",i,i*i);
	}
}
