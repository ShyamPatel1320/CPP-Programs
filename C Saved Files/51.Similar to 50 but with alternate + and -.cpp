#include<stdio.h>
main()
{
	int a,i,s=0;
	printf("Enter upper limit of the loop program\n");
	scanf("%d",&a);
	for(i=1;i<a;i++)
	{
		if(i%2!=0)
		{
			printf("%d - ",i*i);
			s=s+(i*i);
		}
		else
		{
			printf("%d + ",i*i);
			s=s-(i*i);
		}
	}
	if(a%2==0)
	{
		printf("%d = %d",a*a,s-(a*a));	
	}
	else
	{
		printf("%d = %d",a*a,s+(a*a));
	}
}
