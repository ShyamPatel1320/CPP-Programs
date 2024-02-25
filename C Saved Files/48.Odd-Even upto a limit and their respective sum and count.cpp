#include<stdio.h>
main()
{
	int c=0,s=0,d=0,t=0,i,a;
	printf("Till which number do you want to know odd or even of any number?\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(i%2==0)
		{
			printf("%d is even\n",i);
			c++;
			s=s+i;
		}
		else
		{
			printf("%d is odd\n",i);
			t=t+i;
			d++;
		}
	}
	printf("Number of even numbers from 1 to %d is %d and their sum is %d\n",a,c,s);
	printf("Number of odd numbers from 1 to %d is %d and their sum is %d",a,d,t);
}
