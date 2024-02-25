#include<stdio.h>
#include<string.h>
main()
{
	int i=0,n,v=0;
	char name[200],ch;
	printf("Enter name\n");
	gets(name);
	n=strlen(name);
	for(i=0;i<n;i++)
	{
		ch=name[i];
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
		{
			v++;
		}
	}
	printf("Number of vowels are %d",v);
}
