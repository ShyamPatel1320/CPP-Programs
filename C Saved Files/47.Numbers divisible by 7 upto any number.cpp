#include<stdio.h>
main()
{
	int a,i;
	printf("Enter upto where you want all the numbers divisible by 7?\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(i%7==0)
		{
			printf("%d is divisible by 7\n",i);
		}
	}
}

