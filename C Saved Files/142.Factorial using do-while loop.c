#include<stdio.h>
main()
{
	int n,m=1;
	printf("Which numbers' factorial do you want?\n");
	scanf("%d",&n);
	printf("The factorial is as follows:\n");
	do
	{
		printf("%d x ",n);
		m=m*n;
		n--;
	}while(n>1);
	printf("1 = %d",m);
}
