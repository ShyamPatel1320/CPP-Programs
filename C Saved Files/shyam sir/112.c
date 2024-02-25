#include<stdio.h>
void main()
{
	char name[200],ch;
	int i,n,c=0;
	printf("enter name=");
	gets(name);
	n=strlen(name)-1;
	for(i=0;i<n;i++)
	{
		ch=name[i];
		if(ch=='k')
		{
			c++;
		}
	}
	printf("count=%d",c);
		
	
}
