#include<stdio.h>
main()
{
	FILE *f1; // * is a pointer as it points a file
	char ch;
	f1=fopen("C:\\Users\\user\\Documents\\ABC.txt","r");
	while(ch!=EOF)
	{
		ch=getc(f1);
		printf("%c",ch);
	}
	fclose(f1);
}
