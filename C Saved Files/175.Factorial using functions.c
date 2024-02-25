#include<stdio.h>
void factorial()
{
	int a,p=1;
	printf("Give any number\n");
	scanf("%d",&a);
	while(a-1>0)
	{
		printf("%d x ",a);
		p=p*a;
		a--;
	}
	printf("1 = %d",p);
}
main()
{
	factorial();
}
