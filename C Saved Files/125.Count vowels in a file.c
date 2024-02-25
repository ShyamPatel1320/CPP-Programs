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
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
		{
			c++;
		}
	}
	printf("\nThe above printed paragraph has %d vowels",c);
	fclose(f1);
}
