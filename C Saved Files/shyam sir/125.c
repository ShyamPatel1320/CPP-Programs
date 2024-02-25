#include<stdio.h>
void main()
{
	char ch,name[20];
	int i,n,x=0;
	printf("enter name=");
	gets(name);
	n=strlen(name);
	for(i=0;i<n;i++)
	{
		ch=name[i];
		if(ch==' ')
		{
			x++;
			if(x==1)
			{
				printf(" ");
			}
		}
		else
		{
			x=0;
			printf("%c",ch);
		}
	}
}
