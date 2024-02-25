#include<stdio.h>
void main()
{
	char name1[20],name2[20],name3[20];
	int a,b,c;
	printf("enter name1=");
	gets(name1);
		fflush(stdin);
		printf("\nenter a=");
		scanf("%d",&a);
			fflush(stdin);
			printf("enter name2=");
			gets(name2);
			printf("\nenter b=");
			scanf("%d",&b);
		fflush(stdin);
	printf("enter name3=");
	gets(name3);
		printf("\nenter c=");
		scanf("%d",&c);
	printf("\n NO        NAME");
	printf("\n_______________");
	printf("\n%d        %s",a,name1);
	printf("\n===============");
	printf("\n%d        %s",b,name2);
	printf("\n===============");
	printf("\n%d        %s",c,name3);
	printf("\n_______________");
}
