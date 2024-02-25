#include<stdio.h>
main()
{
	FILE *f1,*f2,*f3;
	char ch,m;
	f1=fopen("C:\\Users\\user\\Documents\\File 1.txt","r");
	f2=fopen("C:\\Users\\user\\Documents\\File 2.txt","r");
	f3=fopen("C:\\Users\\user\\Documents\\XYZ.txt","w");
	while(ch!=EOF)
	{
		ch=getc(f1);
		putc(ch,f3);	
	}
	while(m!=EOF)
	{
		m=getc(f2);
		putc(m,f3);
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	printf("Created 1 new file by merging 2 files");
}
