#include<stdio.h>
main()
{
	FILE *f1,*f2,*f3;
	char ch;
	f1=fopen("C:\\Users\\user\\Documents\\ABC.txt","r");
	f2=fopen("C:\\Users\\user\\Documents\\Vowels.txt","w");
	f3=fopen("C:\\Users\\user\\Documents\\Consonants.txt","w");
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
		{
			putc(ch,f2);	
		}
		else
		{
			putc(ch,f3);
		}	
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	printf("Created 2 new files individually for vowels and consonants");
}
