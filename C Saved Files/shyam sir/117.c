#include<stdio.h>
void main()
{
	char ch,a,b,name[200];
	int i,n;
	printf("enter name=");
	gets(name);
	n=strlen(name)-1;
	printf("\n enter charecter which replace from name=");
	scanf("%c",&a);
	fflush(stdin);
	printf("\n enter new charecter=");
	scanf("%c",&b);
	for(i=0;i<n;i++)
	{
	    ch=name[i];
	    if(ch==a)
	    {
	    	printf("%c",b);
		}
		else
		{
			printf("%c",name[i]);
		}
	}
}
