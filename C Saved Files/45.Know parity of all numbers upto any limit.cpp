#include<stdio.h>
main()
{
	int a,x;
	printf("Tell upto which number you want to know odd-even of all number?\n");
	scanf("%d",&a);
	for(x=1;x<=a;x++)
	{
		if(x%2==0)
		{
			printf("%d is even\n",x);
		}
		else
		{
			printf("%d is odd\n",x);
		}
	}
}
