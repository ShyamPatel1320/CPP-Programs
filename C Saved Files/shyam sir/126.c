#include<stdio.h>
void main()
{
	char name1[20]={""},name2[20]={""},name3[20]={""};
	int i,n1,n2,n;
	printf("enter name1=");
	gets(name1);
	printf("enter name2=");
	gets(name2);
	n1=strlen(name1);
	for(i=0;i<n1;i++)
	{
		name3[i]=name1[i];
	}
	n2=strlen(name2);
	for(i=0;i<n2;i++)
	{
		name3[i+n1]=name2[i];
	}
	
	printf("\nFull name = %s",name3);
	
}
