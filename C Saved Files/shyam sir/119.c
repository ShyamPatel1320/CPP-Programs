#include<stdio.h>
void main()
{
	char i,name1[100],name2[100],ch1,ch2;
	int n,y,x=0;
	printf("enter 1st name=");
	gets(name1);
	printf("enter 2nd name=");
	gets(name2);
	n=strlen(name1);
	for(i=0;i<n;i++)
	{
		ch1=name1[i];
		ch2=name2[i];
		if(ch1!=ch2)
		{
			x=1;
			break;
	    }
	}
	if(x==0)
	{
		printf("equal");
	}
	else
	{
		printf("not equal");
	}
}
