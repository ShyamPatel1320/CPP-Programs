#include<stdio.h>
void main()
{
	char name[20],vowle[20],Nvowle[20]={""},ch;
	int i,n,k=0,m=0;
	printf("enter name=");
	gets(name);
	n=strlen(name);
	for(i=0;i<n;i++)
	{
			ch=name[i];
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			vowle[k]=ch;
			k++;
		}
		else
		{
			Nvowle[m]=name[i];
			m++;
		}
	}
	{
		printf("\n %s",vowle);
		printf("\n %s",Nvowle);
	}
}
