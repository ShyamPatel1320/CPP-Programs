#include<stdio.h>
	struct stud
{
	char name[20];
	int no,english,hindi;
};
main()
{
	struct stud s1,s2;
	printf("\nenter no=");
	scanf("%d",&s1.no);
	fflush(stdin);
	printf("\nenter name=");
	gets(s1.name);
	printf("\nenter mark of hindi=");
	scanf("%d",&s2.hindi);
	fflush(stdin);
	printf("\nenter mark of english=");
	scanf("%d",&s2.english);
	printf("\n no=%d \n name=%s  \n hindi=%d  \n english=%d",s1.no,s1.name,s2.hindi,s2.english);

}
