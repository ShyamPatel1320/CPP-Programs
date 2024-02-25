#include<stdio.h>
main()
{
	int a;
	printf("Enter any character\n");
	scanf("%c",&a);
	if(a>=65 && a<=90)
	{
		printf("Given letter is in uppercase and its lowercase character is %c",a+32);
	}
	else if(a>=97 && a<=122)
	{
		printf("Given letter is in lowercase and its uppercase character is %c",a-32);
	}
	else
	{
		printf("Entered character is %c and hence is not an alphabet",a);
	}
}
