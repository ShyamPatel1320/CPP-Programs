#include<stdio.h>
void main()
{
	char name[20],ch,ch1;
	int i,n,x;
	printf("enter name=");
	gets(name);
	n=strlen(name);
	//ram shyam radha rukmani
	for(i=0;i<n;i++)
	{
		ch=name[i];
		if(ch==' ')
		{
			x=1;
			printf(" ");
		}
		else
		{
			if(x==1)
			{
			printf("%c",ch-32);
			x=0;
			}
			else
			{
			printf("%c",ch);
			}
		}
	}
}
