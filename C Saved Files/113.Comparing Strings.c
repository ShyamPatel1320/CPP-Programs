#include<stdio.h>
#include<string.h>
main()
{
	int m,n,i,d=1;
	char string1[200],string2[200];
	printf("Enter string 1\n");
	gets(string1);
	m=strlen(string1);
	printf("Enter string 2\n");
	gets(string2);
	n=strlen(string2);
	if(m==n)
	{
		for(i=0;i<m;i++)
		{
			if(string1[i]==string2[i])
			{	
			}
			else
			{
				d=0;
				printf("Strings are different");
				break;
			}
		}
	}
	else
	{
		d=0;
		printf("Strings are different");
	}
	if(d==1)
	{
		printf("Strings are same");
	}
}
