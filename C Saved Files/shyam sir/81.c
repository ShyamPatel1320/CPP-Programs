#include<stdio.h>
void main()
{
	int i,n;
	printf("enter n=");
	scanf("%d",&n);
	i=1;
	do
	{
		if(i%2==0)
		{
			printf("\n%d-even",i);
		}
		else
		{
			printf("\n%d-odd",i);
		}
		i++;
	}
	while(i<=n);
}
