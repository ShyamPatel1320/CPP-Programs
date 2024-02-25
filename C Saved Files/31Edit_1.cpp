#include<stdio.h>
main()
{
	int a;
	printf("Enter any alphabet\n");
	scanf("%c",&a);
	if(a=='A' || a=='a' || a=='E' || a=='e' || a=='I' || a=='i' || a=='O' || a=='o' || a=='U' || a=='u')
	{
		printf("Entered alphabet is a vowel");
	}
	else
	{
		printf("Entered alphabet is a consonant");
	}
}
