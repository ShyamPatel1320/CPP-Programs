#include<stdio.h>
main()
{
	FILE *f1;
	char ch;
	f1=fopen("C:\\Users\\user\\Documents\\ABC.txt","r");
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(ch==' ')
		{
		}
		else
		{
			printf("%c",ch);
		}
	}
	fclose(f1);
}
