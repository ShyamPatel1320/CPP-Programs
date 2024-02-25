#include<stdio.h>
#include<string.h>
main()
{
	int l;
	char string1[2000],string2[2000];
	printf("Give string 1\n");
	gets(string1);
	fflush(stdin);
	printf("String 1: %s",string1);
	l=strlen(string1); // example of use of strlen function.
	
	printf("\n\nGive string 2\n");
	gets(string2);
	fflush(stdin);
	printf("String 2: %s",string2);
	
	printf("\n\nLength of string 1 is %d",l);
	
	strcat(string1,string2); // example of strcat(function to merge strings into one) on string 1 and string 2.
	printf("\n\nAfter strcat on string 1, string 1 is %s",string1);
	
	strcpy(string1,string2); // example of strcpy(function to copy one string on other) on string 1.
	printf("\n\nAfter strcpy on string 1, string 1 is %s",string1);
	
	int x=strcmp(string1,string2); // example of strcmp(function to compare strings) on string 1 and string 2. If strings are same, x=1 or else x=0.
	printf("\n\nValue of integer x after function strcmp is %d",x);
}
