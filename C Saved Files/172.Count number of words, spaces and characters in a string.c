#include<stdio.h>
#include<string.h>
main()
{
	int i=0,n,v=0;
	char string[200],ch,k;
	printf("Enter string\n");
	gets(string);
	n=strlen(string);
	for(i=0;i<n;i++)
	{
		if(string[i]==' ')
		{
			v++;
		}
	}
	printf("Number of characters are %d\n",n);
	printf("Number of spaces are %d\n",v);
	printf("Number of words are %d",v+1);
}
