#include<stdio.h>
#include<string.h>
main()
{
	int i=0,n;
	char string[200],k,m;
	printf("Which character do you want to replace?\n");
	scanf("%c",&k);
	fflush(stdin);
	printf("Which character do you want to put instead of it?\n");
	scanf("%c",&m);
	fflush(stdin);
	printf("Enter the string\n");
	gets(string);
	n=strlen(string);
	printf("By replacing %c by %c we get the following string\n",k,m);
	for(i=0;i<n;i++)
	{
		if(string[i]==k)
		{
			string[i]=m;
		}
		printf("%c",string[i]);
	}
}
