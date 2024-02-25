#include<stdio.h>
void main()
{
	int i,n;
	printf("enter n=");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("\n %d is even",i);
		}
		else
		{
			printf("\n %d is odd",i);
		}
		i++;
	}
}
