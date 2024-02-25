#include<stdio.h>
main()
{
	int a;
	printf("Enter any number from 1 to 7\n");
	scanf("%d",&a);
	if(a==1)
	{
		printf("It is Sunday");
	}
	if(a==2)
	{
		printf("It is Monday");
	}
	if(a==3)
	{
		printf("It is Tuesday");
	}
	if(a==4)
	{
		printf("It is Wednesday");
	}
	if(a==5)
	{
		printf("It is Thursday");
	}
	if(a==6)
	{
		printf("It is Friday");
	}
	if(a==7)
	{
		printf("It is Saturday");
	}
	if(a!=1 && a!=2 && a!=3 && a!=4 && a!=5 && a!=6 && a!=7 )
	{
		printf("Given number is invalid");
	}
}
