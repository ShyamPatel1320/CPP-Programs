#include<stdio.h>
#include<string.h>
main()
{
	int i=0,n;
	char string[999];
	printf("Give any string\n");
	gets(string);
	n=strlen(string);
	printf("Original String: ");
	for(i=0;i<n;i++)
	{
		printf("%c",string[i]);
	}
	printf("\nReversed String: ");
	for(i=n-1;i>=0;i--)
	{
		printf("%c",string[i]);
	}
}
