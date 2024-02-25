#include<stdio.h>
#include<string.h>
main()
{
	int i=0,n,v=0;
	char string[200],k;
	printf("Which character do you want to count?\n");
	scanf("%c",&k);
	fflush(stdin);
	printf("Enter string\n");
	gets(string);
	n=strlen(string);
	printf("The character %c is present at the following positions:\n",k);
	for(i=0;i<n;i++)
	{
		if(string[i]==k)
		{
			v++;
			printf("Position %d\n",i+1);
		}
	}
	printf("Number of %c are %d",k,v);
}
