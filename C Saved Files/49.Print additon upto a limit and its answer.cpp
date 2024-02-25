#include<stdio.h>
main()
{
	int a,i,s=0; 
	printf("Enter number till where you want the addition of numbers\n");
	scanf("%d",&a);
	for(i=1;i<a;i++)
	{
		printf("%d + ",i);
		s=s+i;
	}
	printf("%d = %d",a,s+a);
}
