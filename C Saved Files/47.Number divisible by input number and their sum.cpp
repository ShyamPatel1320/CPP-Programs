#include<stdio.h>
main()
{
	int i,j,k,x=0,c=0;
	printf("By which number do you want all the printed numbers to be divisible?\n");
	scanf("%d",&i);
	printf("Till where do you want all such numbers?\n");
	scanf("%d",&j);
	for(k=1;k<=j;k++)
	{
		if(k%i==0)
		{
		printf("%d is divisible by %d\n",k,i);
		x=x+k;
		c++;
		}
	}
	printf("Sum of all divisible numbers is %d and number of divisible numbers are %d",x,c);
}
