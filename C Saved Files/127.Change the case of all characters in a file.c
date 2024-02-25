#include<stdio.h>
main()
{
	FILE *f1;
	char ch,a;
	f1=fopen("C:\\Users\\user\\Documents\\ABC.txt","r");
	printf("Original paragraph is as follows,\n\n");
	while(ch!=EOF)
	{
		ch=getc(f1);
		printf("%c",ch);
	}
	fclose(f1);
	f1=fopen("C:\\Users\\user\\Documents\\ABC.txt","r");
	printf("\nBy changing uppercase to lowercase and vice-versa, we get the following passage,\n\n");
	while(a!=EOF)
	{
		a=getc(f1);
		if(a>=65 && a<=90)
		{
			printf("%c",a+32);
		}
		else if(a>=97 && a<=122)
		{
			printf("%c",a-32);
		}
		else
		{
			printf("%c",a);
		}
	}
	fclose(f1);
}
