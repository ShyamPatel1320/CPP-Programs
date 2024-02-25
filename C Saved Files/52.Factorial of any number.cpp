#include<stdio.h>
main()
{
	int a,i,p;
	printf("Enter number whose factorial you want to find out\n");
	scanf("%d",&a);
	for(i=1;i<a;i++)
	{
		printf("%d * ",i);
		p=p*i;
	}
	printf("%d = %d",a,p*a);
}
