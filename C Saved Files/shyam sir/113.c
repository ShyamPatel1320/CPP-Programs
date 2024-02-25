#include<stdio.h>
void main()
{
	char name[200],ch,a;
	int i,n,c=0;
	printf("enter name=");
	gets(name);
	n=strlen(name)-1;
		printf("\n enter alphabate for count=");
		scanf("%c",&a);
	for(i=0;i<n;i++)
	{
		ch=name[i];
		if(ch==a)
		{
			c++;
		}
	}
	printf("count=%d",c);
		
	
}
