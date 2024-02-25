#include<stdio.h>
#include<conio.h>
void toh(char n,char s,char d,char a);
void main()
{
	int n;
	printf("enter n=");
	scanf("%d",&n);
	toh(n,'A','B','C');
}
toh(int n,char s,char d,char a)
{
	if(n>0)
	{
		toh(n-1,s,a,d);
		printf("%c->%c",s,d);
		toh(n-1,a,d,s);
	}
}
