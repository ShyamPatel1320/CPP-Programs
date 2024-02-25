#include<stdio.h>
	struct data
	{
		int dd,mm,yy;
	};

struct student
{
	int sno;
	char sname[20];
	struct data dob,doj;
};
main()
{
	struct student s1;
	printf("\n enter s1 s no=");
	scanf("%d",&s1.sno);
	fflush(stdin);
	printf("\nenter s1 s name=");
	scanf("%s",s1.sname);
	fflush(stdin);
	printf("\n enter s1 s date of birth dd,mm,yy=");
	scanf("%d%d%d",&s1.dob.dd,&s1.dob.mm,&s1.dob.yy);
	printf("\n enter s1 s date of join dd,mm,yy=");
	scanf("%d%d%d",&s1.doj.dd,&s1.doj.mm,&s1.doj.yy);
	printf("\n s1 s no=%d name=%sDOB=%d%d%d DOJ=%d%d%d",s1.sno,s1.sname,s1.dob.dd,s1.dob.mm,s1.dob.yy,s1.doj.dd,s1.doj.mm,s1.doj.yy);	
}
