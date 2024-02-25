#include<stdio.h>
main()
{
	FILE *f1;
	int c=0;
	char a,b,ch,m;
	printf("Which character do you want to replace?\n");
	scanf("%c",&a);
	fflush(stdin);
	printf("By which character do you want to replace it?\n");
	scanf("%c",&b);
	printf("Original paragraph is as follows,\n");
	f1=fopen("C:\\Users\\user\\Documents\\ABC.txt","r");
	while(ch!=EOF)
	{
		ch=getc(f1);
		printf("%c",ch);
	}
	fclose(f1);
	printf("\bBy converting this paragraph as desired,\n"); // \b is for backspace. after end of file, there is a suspicious space entered by program. we are removing that space by\b
	f1=fopen("C:\\Users\\user\\Documents\\ABC.txt","r");
	while(m!=EOF)
	{
		m=getc(f1);
		if(m==a)
		{
			printf("%c",b);
		}
		else
		{
			printf("%c",m);
		}
	}
	fclose(f1);
}
