#include<stdio.h>
void main()
{
	char ch,name[200];
	int i,n;
	printf("enter name=");
	gets(name);
	n=strlen(name)-1;
	for(i=0;i<n;i++)
	{
		ch=name[i];
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			printf("7");
		}
		else
		{
			printf("%c",name[i]);
		}
	}
}
