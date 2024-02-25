#include<stdio.h>
main()
{
	FILE *f1;
	int c=0;
	char ch;
	f1=fopen("C:\\Users\\user\\Documents\\ABC.txt","r");
	while(ch!=EOF)
	{
		ch=getc(f1);
		printf("%c",ch);
		if(ch==' ')
		{
			c++;
		}
	}
	printf("\nThe above printed paragraph has %d spaces",c);
	fclose(f1);
}
