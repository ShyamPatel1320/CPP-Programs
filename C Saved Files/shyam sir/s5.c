#include<stdio.h>
struct stud
{
	char name[20];
	int no,e,h;	
};
main()
{
	struct stud s1[50],s2[50];
	int n,i,pos=0,m;
	printf("enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter no=");
		scanf("%d",&s1[i].no);
		fflush(stdin);
		printf("\n enter name=");
		gets(s1[i].name);
		printf("\n enter hindi mark=");
		scanf("%d",&s2[i].h);
		printf("\n enter english mark=");
		scanf("%d",&s2[i].e);
}
		printf("data of pass student");	
printf("\nno\tname\thindi\tenglish\ttotal");
printf("\n ================================================");
{
	m=s2[0].e+s2[0].h;
	pos=0;
	for(i=0;i<n;i++)
	{
		if(m<s2[i].e+s2[i].h)
		{
			pos=i;
			m=s2[i].e+s2[i].h;
		}
	}
		printf("\n%d\t%s\t%d\t%d\t%d",s1[pos].no,s1[pos].name,s2[pos].h,s2[pos].e,s2[pos].h+s2[pos].e);
}
}
