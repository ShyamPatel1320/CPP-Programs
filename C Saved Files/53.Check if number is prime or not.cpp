#include<stdio.h>
main()
{
	int a,i,x=1;
	printf("Enter number to check if it is prime or not\n");
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			x=0;
			break;
		}
	}
	if(x==1)
	{
		printf("%d is prime number",a);
	}
	else
	{
		printf("%d is not prime number",a);
	}
}

