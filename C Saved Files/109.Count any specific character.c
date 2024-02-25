#include<stdio.h>
#include<string.h>
main()
{
	int i=0,n,v=0;
	char string[200],ch,k;
	printf("Which character do you want to count?\n");
	scanf("%c",&k);
	fflush(stdin);
	printf("Enter string\n");
	gets(string);
	n=strlen(string);
	for(i=0;i<n;i++)
	{
		ch=string[i];
		if(ch==k)
		{
			v++;
		}
	}
	printf("Number of %c are %d",k,v);
}
