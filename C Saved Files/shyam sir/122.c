#include<stdio.h>
void main()
{
	char name[20],ch;
	int n,i;
	printf("enter name=");
	gets(name);
	n=strlen(name);
	for(i=0;i<n;i++)
	{
		ch=name[i];
		if(ch>=97&&ch<=122)
		{
			printf("%c",ch-32);
		}
		else if(ch>=65&&ch<=90)
		{
			printf("%c",ch+32);
		}
		else
		{
			printf("%c",ch);
		}
	}
}
