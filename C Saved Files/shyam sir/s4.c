#include<stdio.h>
struct stud
{
	char name[20];
	int no,e,h;	
};
main()
{
	struct stud s1[50],s2[50];
	int n,i,ch;
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
	do
	{
		printf("\npress 1 for data of pass student\npress 2 for data of fail student\npress 3 for data of pass&fail student\n 4 for exit \nenter ch=");
		scanf("%d",&ch);
	if(ch==1)
	{
		printf("\nno\tname\thindi\tenglish\ttotal");
        printf("\n ================================================");
		
	for(i=0;i<n;i++)
	{
		if(s2[i].h+s2[i].e>33)
		{
				printf("\n%d\t%s\t%d\t%d\t%d",s1[i].no,s1[i].name,s2[i].h,s2[i].e,s2[i].h+s2[i].e);
		}
	}
	
	}
	else if(ch==2)
	{
		printf("\nno\tname\thindi\tenglish\ttotal");
        printf("\n ================================================");
	for(i=0;i<n;i++)
	{
		if(s2[i].h+s2[i].e<33)
		{
				printf("\n%d\t%s\t%d\t%d\t%d",s1[i].no,s1[i].name,s2[i].h,s2[i].e,s2[i].h+s2[i].e);
		}
	}
	
	
	}
	else if(ch==3)
	{
		printf("\nno\tname\thindi\tenglish\ttotal");
        printf("\n ================================================");
	for(i=0;i<n;i++)
	{
				printf("\n%d\t%s\t%d\t%d\t%d",s1[i].no,s1[i].name,s2[i].h,s2[i].e,s2[i].h+s2[i].e);
		if(s2[i].e+s2[i].h>33)
		{
			printf("\tpass");
		}
		else
		{
			printf("\tfail");
		}
	}
	}
	else
	{
		printf("wronge");
	}
}while(ch!=4);
}

