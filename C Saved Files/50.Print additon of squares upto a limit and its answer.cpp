#include<stdio.h>
main()
{
	int a,i,s=0;
	printf("Enter number till where you want sum of their squares\n");
	scanf("%d",&a);
	for(i=1;i<a;i++)
	{
		printf("%d + ",i*i);
		s=s+(i*i);
	}
	printf("%d = %d",a*a,s+(a*a));
}
