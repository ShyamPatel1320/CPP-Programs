#include<stdio.h>
main()
{
	int x,i;
	printf("Till where do you want all even numbers?\n");
	scanf("%d",&x);
	for(i=0;i<=x;i=i+2)
	{
		printf("%d\n",i);
	}
}
