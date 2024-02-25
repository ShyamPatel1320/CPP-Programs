#include<stdio.h>
main()
{
	// we have to make the same program as 32 but with using 'esle if'.If the first 'if' is true, then program wont check rest conditions if we use 'else if'.
	// in program 32, all 'if' are exclusive and program checks all irrespective of the first one being true(in case use entered 1).
	int a;
	printf("Enter any number from 1 to 7\n");
	scanf("%d",&a);
	if(a==1)
	{
		printf("It is Sunday");
	}
	else if(a==2) // 'else if' is ultimately an 'else'. So, it needs one 'if' before it. 
	{
		printf("It is Monday");
	}
	else if(a==3)
	{
		printf("It is Tuesday");
	}
	else if(a==4)
	{
		printf("It is Wednesday");
	}
	else if(a==5)
	{
		printf("It is Thursday");
	}
	else if(a==6)
	{
		printf("It is Friday");
	}
	else if(a==7)
	{
		printf("It is Saturday");
	}
	else if(a!=1 && a!=2 && a!=3 && a!=4 && a!=5 && a!=6 && a!=7 )
	{
		printf("Given number is invalid");
	}
}	
