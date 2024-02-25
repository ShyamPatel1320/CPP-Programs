#include<stdio.h>
void main()
{
	int i,n;
	printf("enter n=");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("\n %d - %d",i,i*i);
		i++;
	}
}
