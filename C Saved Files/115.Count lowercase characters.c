#include<stdio.h>
#include<string.h>
main()
{
	int m,i,c=0;
	char string[200];
	printf("Enter any string\n");
	gets(string);
	m=strlen(string);
	for(i=0;i<m;i++)
	{
		if(string[i]>=97 && string[i]<=122)
		{
			c++;
		}
	}
	printf("Total numbers of lowercase characters is %d",c);
}
