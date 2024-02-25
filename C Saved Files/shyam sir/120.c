#include<stdio.h>
void main()
{
	char name[20],ch;
	int u=0,l=0;
	int i,n;
	printf("enter name=");
	gets(name);
	n=strlen(name);
	for(i=0;i<n;i++)
	{
		ch=name[i];
		if(ch>=97 && ch<=122)
		{
			l++;
		}
		else
		{
			u++;
		}
	}
	printf("\n lower alphabates=%d",l);
	printf("\n uper alphabates=%d",u);
}
