#include<stdio.h>
#include<string.h>
main()
{
	int i=0;
	char string[2000];
	printf("Give any string\n");
	gets(string);
	fflush(stdin);
	while(string[i]!='\0') // \0 indicates end of string.
	{
		i++;
	}
	printf("The length of given string is %d",i);
}
