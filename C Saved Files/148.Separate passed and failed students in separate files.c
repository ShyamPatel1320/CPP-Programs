#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[200];
	float marks;
};
main()
{
	FILE *f1,*f2,*f3;
	int m=0,d=0;
	struct student student;
	char c;
	f1=fopen("C:\\Users\\user\\Documents\\StudentRecords.dat","r");
	f2=fopen("C:\\Users\\user\\Documents\\StudentRecordsPassed.dat","w");
	f3=fopen("C:\\Users\\user\\Documents\\StudentRecordsFailed.dat","w");
	while(fread(&student,sizeof(student),1,f1)>0)
	{
		if(student.marks>=35)
		{
			fwrite(&student,sizeof(student),1,f2);
		}
		else
		{
			fwrite(&student,sizeof(student),1,f3);
		}			
	}
	printf("Separate files created\n");
	fclose(f1);
	fclose(f2);
	fclose(f3);
	f2=fopen("C:\\Users\\user\\Documents\\StudentRecordsPassed.dat","r");
	f3=fopen("C:\\Users\\user\\Documents\\StudentRecordsFailed.dat","r");
	printf("Passed students are as follow:\n");
	while(fread(&student,sizeof(student),1,f2)>0)
	{
		printf("%d\t%s\t%.2f\n",student.rollno,student.name,student.marks);			
	}
	printf("Failed students are as follow:\n");
	while(fread(&student,sizeof(student),1,f3)>0)
	{
		printf("%d\t%s\t%.2f\n",student.rollno,student.name,student.marks);
	}
}
