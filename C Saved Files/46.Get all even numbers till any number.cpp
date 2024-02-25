#include<stdio.h>
main()
{
	int a,i;
	printf("Till which number do you want all even numbers?\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(i%2==0)
		{
			printf("%d is even\n",i);
		}
	}
}
