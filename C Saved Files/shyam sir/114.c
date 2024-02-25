#include<stdio.h>
void main()
{
	char name[200],a,b,ch,n,i;
	printf("enter name=");
	gets(name);
	n=strlen(name);
	for(i=0;i<n;i++)
	{
	ch=name[i];
	if(ch=='k')
	{
		printf("m");
	}
	else
	{
	printf("%c",ch);	
	}
}
}
