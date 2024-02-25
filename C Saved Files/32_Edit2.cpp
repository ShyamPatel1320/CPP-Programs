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
	else // here, this 'else' is of its previous 'else if' only but 'else' will run only if previous 'else if' is false and this will happen only if rest 'else if' are false.
	{
		printf("Given number is invalid");
	}
}
