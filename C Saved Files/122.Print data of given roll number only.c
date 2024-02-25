#include<stdio.h>
#include<string.h>
struct student
{
	int hindimarks,englishmarks;
	char name[30],status[10];
};
main()
{
	struct student student[100];
	int i,n,a;
	printf("How many student's data you want to store?\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("Enter name of roll number %d\n",i+1);
		gets(student[i].name);
		fflush(stdin);
		printf("Enter hindi marks of student %d\n",i+1);
		scanf("%d",&student[i].hindimarks);
		fflush(stdin);
		printf("Enter english marks of student %d\n",i+1);
		scanf("%d",&student[i].englishmarks);
		if(student[i].hindimarks+student[i].englishmarks>=50)
		{
			strcpy(student[i].status,"pass");
		}
		else
		{
			strcpy(student[i].status,"fail");
		}
	}
	printf("Which student's data do you want?Give roll number\n");
	scanf("%d",&a);
	printf("\nFollowing is the data of student having roll number %d",a);
	printf("\nNo\tName\tEnglish\tHindi\tTotal");
	printf("\n======================================");
	for(i=0;i<n;i++)
	{
		if(i+1==a)
		{
			printf("\n%d\t%s\t%d\t%d\t%d",i+1,student[i].name,student[i].hindimarks,student[i].englishmarks,student[i].hindimarks+student[i].englishmarks);
		}
	}
	if(a>n)
	{
		printf("Invalid roll number");
	}
}
