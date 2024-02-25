#include<stdio.h>
void main()
{
	char name[20],ch;
	int i,n;
	printf("enter name=");
	gets(name);
	n=strlen(name);
	for(i=0;i<n;i++)
	{
		ch=name[i];
		if(ch==' ')
		{
			printf("");
		}
		else
		{
			printf("%c",ch);
		}
	}
}

