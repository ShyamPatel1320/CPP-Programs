#include<stdio.h>
#include<string.h>
main()
{
	int i,j,m,n,l,flag=0;
	char string[2000],word[200];
	printf("Give a string\n");
	gets(string);
	m=strlen(string);
	fflush(stdin);
	printf("Entered string: ");
	for(i=0;i<m;i++)
	{
		printf("%c",string[i]);
	}
	i=0;
	printf("\nWhich word do you want to add in the string?\n");
	gets(word);
	n=strlen(word);
	fflush(stdin);
	printf("Entered word: ");
	for(i=0;i<n;i++)
	{
		printf("%c",word[i]);
	}
	printf("\nAt which position do you want the word to get printed in the string?\n");
	scanf("%d",&l);
	printf("After adding word to string : ");
	i=0;
	for(i=0;i<m+1;i++)
	{
		if(i+1==l)
		{
			for(j=0;j<n;j++)
			{
				printf("%c",word[j]);
				flag=1;
			}
		}
		else
		{
			if(flag==1)
			{
				printf("%c",string[i-1]);
			}
			else
			{
				printf("%c",string[i]);
			}
		}
	}
}
