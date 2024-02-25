#include<stdio.h>
void main()
{
	char n,i,ch,name[200];
	printf("enter name=");
	gets(name);
	n=strlen(name)-1;
	for(i=0;i<n;i++)
	{
		ch=name[i];
		printf("\n%c",ch);
	}
}
