#include<stdio.h>
#include<conio.h>
void main()
{
	char ch1,ch2,name[200],i;
	int n,x=0;
	printf("\n enter name=");
	gets(name);
	n=strlen(name)-1;
	for(i=0;i<strlen(name);i++)
	{
		ch1=name[i];
		ch2=name[n];
		printf("\n%c %c",ch1,ch2);
		if(ch1!=ch2)
		{
			x=1;
			break;
		}
	n--;
	}
	if(x==0)
	{
		printf("\npalindrome");
	}
	else
	{
		printf("\nnot palindrome");
	}
}
