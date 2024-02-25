#include<stdio.h>
main()
{
	int a;
	printf("Enter any alphabet\n");
	scanf("%c",&a);
	if(a==65 || a==69 || a==73 || a==79 || a==85 || a==97 || a==101 || a==105 || a==111 || a==117)
	{
		printf("Entered alphabet is a vowel");
	}
	else
	{
		printf("Entered alphabet is a consonant");
	}
}
