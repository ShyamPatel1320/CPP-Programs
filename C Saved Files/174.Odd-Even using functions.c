#include<stdio.h>
void oddeven(int x)
{
	if(x%2==0)
	{
		printf("%d is even",x);
	}
	else
	{
		printf("%d is odd",x);
	}
}
main()
{
	int a;
	printf("Give any number\n");
	scanf("%d",&a);
	oddeven(a);
}
