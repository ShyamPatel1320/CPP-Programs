#include<stdio.h>
main()
{
	int n,i=1,j=0,c=0;
	printf("How many numbers of the fibonacci series do you want?\n");
	scanf("%d",&n);
	printf("The fibonacci series is as follow:\n0\n1\n");
	while(n-2>0)
	{
		printf("%d\n",i+c);
		c=i;
		i=i+j;
		j=c;
		n--;
	}
}
