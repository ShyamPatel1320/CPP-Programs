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
	int i,n;
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
		if(student[i].hindimarks+student[i].englishmarks>=55)
		{
			strcpy(student[i].status,"pass");
		}
		else
		{
			strcpy(student[i].status,"fail");
		}
	}
	
	printf("\nNo\tName\tEnglish\tHindi\tTotal\tStatus");
	printf("\n===========================================");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t%s\t%d\t%d\t%d\t%s",i+1,student[i].name,student[i].hindimarks,student[i].englishmarks,student[i].hindimarks+student[i].englishmarks,student[i].status);
	}
}
