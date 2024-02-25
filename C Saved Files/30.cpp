#include<stdio.h>
main()
{
	int a;
	printf("Enter any character\n");
	scanf("%c",&a);
	if(a>=65)
	{		
		if(a<=90)
		{
			printf("Yes, the entered character is in uppercase");
		}
		else
		{
			printf("No, the entered character is not in uppercase");
		}
	}
	else
	{
		printf("No, the entered character is not in uppercase");
	}
}
