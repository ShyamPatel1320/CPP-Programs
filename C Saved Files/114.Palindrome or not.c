#include<stdio.h>
#include<string.h>
main()
{
	int m,i,d=1;
	char string1[200];
	printf("Enter word\n");
	gets(string1);
	m=strlen(string1);
	for(i=0;i<m;i++)
	{
		if(string1[m-i-1]==string1[i])
		{
		}
		else
		{
			d=0;
			break;
		}
	}
	if(d==1)
	{
		printf("The entered word is a palindrome");
	}
	else
	{
		printf("The entered word is not a palindrome");
	}
}
