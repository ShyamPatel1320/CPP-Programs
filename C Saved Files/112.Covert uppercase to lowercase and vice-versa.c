#include<stdio.h>
#include<string.h>
main()
{
	int i,m,d=0;
	char string[200];
	printf("Enter the string\n");
	gets(string);
	fflush(stdin);
	m=strlen(string);
	printf("By changing the case of each character, we get the following string\n");
	for(i=0;i<m;i++)
	{
		if(string[i]>=65 && string[i]<=90)
		{
			printf("%c",string[i]+32);
		}
		else if(string[i]>=97 && string[i]<=122)
		{
			printf("%c",string[i]-32);
		}
		else if(string[i]==' ')
		{
			printf(" ");
		}
		else
		{
			printf("*");
			d=1;
		}
	}
	if(d=1)
	{
		printf("\nWhere there is a * indicates that the character you entered is not an alphabet.");
	}
}
