#include<stdio.h>
#include<string.h>
main()
{
	int i=0,m,n;
	char string1[200],string2[200],string3[400]={""}; // we need to do ={""} after array to clean junk of array 
	printf("Enter the string 1\n");
	gets(string1);
	m=strlen(string1);
	fflush(stdin);
	printf("Enter the string 2\n");
	gets(string2);
	n=strlen(string2);
	fflush(stdin);
	printf("By merging the strings, we get the following string\n");
	for(i=0;i<m+n;i++)
	{
		if(i<m)
		{
			string3[i]=string1[i];
		}
		else
		{
			string3[i]=string2[i-m];
		}
	}
	printf("%s",string3);
}
