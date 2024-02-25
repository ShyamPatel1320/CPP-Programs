#include<stdio.h>
#include<string.h>
main()
{
	int m,i;
	char string[200];
	printf("Enter any string\n");
	gets(string);
	m=strlen(string);
	printf("Converting all lowercase characters after space into uppercase, we get the following string\n");
	for(i=0;i<m;i++)
	{
		if(string[i]==' ')
		{
			printf(" ");
			if(string[i+1]>=97 && string[i+1]<=122)
			{
				printf("%c",string[i+1]-32);
				i++;
			}
		}
		else
		{
			printf("%c",string[i]);
		}
	}
}
