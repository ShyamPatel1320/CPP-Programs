#include<stdio.h>
#include<string.h>
struct student
{
	int hindimarks,englishmarks;
	char name[30],status[4
	];
};
main()
{
	struct student student[100];
	int i,n,a,c=0;
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
		if(student[i].hindimarks+student[i].englishmarks>=35)
		{
			strcpy(student[i].status,"pass");
		}
		else
		{
			strcpy(student[i].status,"fail");
		}
	}
	printf("Which students' details do you want?\n");
	printf("1.All Students\n2.Passed Students only\n3.Failed Students only\n");
	scanf("%d",&a);
	if(a==1)
	{
		printf("\nFollowing is the list of all students");
		printf("\nNo\tName\tEnglish\tHindi\tTotal");
		printf("\n======================================");
		for(i=0;i<n;i++)
		{
				printf("\n%d\t%s\t%d\t%d\t%d",i+1,student[i].name,student[i].hindimarks,student[i].englishmarks,student[i].hindimarks+student[i].englishmarks);
				c++;
		}
		printf("\nNumber of all students is %d",c);
	}
	else if(a==2)
	{
		printf("\nFollowing is the list of passed students");
		printf("\nNo\tName\tEnglish\tHindi\tTotal");
		printf("\n======================================");
		for(i=0;i<n;i++)
		{
			if(student[i].hindimarks+student[i].englishmarks>=35)
			{
				printf("\n%d\t%s\t%d\t%d\t%d",i+1,student[i].name,student[i].hindimarks,student[i].englishmarks,student[i].hindimarks+student[i].englishmarks);
				c++;
			}
		}
		printf("\nNumber of passed students is %d",c);
	}
	else if(a==3)
	{
		printf("\nFollowing is the list of failed students");
		printf("\nNo\tName\tEnglish\tHindi\tTotal");
		printf("\n======================================");
		for(i=0;i<n;i++)
		{
			if(student[i].hindimarks+student[i].englishmarks<35)
			{
				printf("\n%d\t%s\t%d\t%d\t%d",i+1,student[i].name,student[i].hindimarks,student[i].englishmarks,student[i].hindimarks+student[i].englishmarks);
				c++;
			}
		}
		printf("\nNumber of failed students is %d",c);
	}
	else
	{
		printf("Invalid choice");
	}
}
