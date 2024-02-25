#include<stdio.h>
#include<string.h>
struct student 
{
	int rollnumber,hindimarks,englishmarks;
	char name[30];
}
main()
{
	struct student s1,s2,s3;
	printf("Enter roll number of student 1\n");
	scanf("%d",&s1.rollnumber);
	printf("Enter roll number of student 2\n");
	scanf("%d",&s2.rollnumber);
	printf("Enter roll number of student 3\n");
	scanf("%d",&s3.rollnumber);
	fflush(stdin);
	printf("Enter name of student 1\n");
	gets(s1.name);
	fflush(stdin);
	printf("Enter name of student 2\n");
	gets(s2.name);
	fflush(stdin);
	printf("Enter name of student 3\n");
	gets(s3.name);
	fflush(stdin);
	printf("Enter hindi marks of student 1\n");
	scanf("%d",&s1.hindimarks);
	fflush(stdin);
	printf("Enter hindi marks of student 2\n");
	scanf("%d",&s2.hindimarks);
	fflush(stdin);
	printf("Enter hindi marks of student 3\n");
	scanf("%d",&s3.hindimarks);
	fflush(stdin);
	printf("Enter english marks of student 1\n");
	scanf("%d",&s1.englishmarks);
	fflush(stdin);
	printf("Enter english marks of student 2\n");
	scanf("%d",&s2.englishmarks);
	fflush(stdin);
	printf("Enter english marks of student 3\n");
	scanf("%d",&s3.englishmarks);
	printf("%d. %s  Hindi marks => %d  English marks => %d\n",s1.rollnumber,s1.name,s1.hindimarks,s1.englishmarks);
	printf("%d. %s  Hindi marks => %d  English marks => %d\n",s2.rollnumber,s2.name,s2.hindimarks,s2.englishmarks);
	printf("%d. %s  Hindi marks => %d  English marks => %d\n",s3.rollnumber,s3.name,s3.hindimarks,s3.englishmarks);
}
