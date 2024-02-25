#include<stdio.h>
main()
{
	FILE *f1;
	char ch,c=0;
	f1=fopen("C:\\Users\\user\\Documents\\ABC.txt","r");
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(ch==' ')
		{
			c++;
		}
		else
		{
			if(c!=0)
			{
				printf(" %c",ch);
				c=0;
			}
			else
			{
				printf("%c",ch);
			}
		}
	}
	fclose(f1);
}
