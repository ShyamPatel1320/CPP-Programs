#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[200];
	float marks;
}
main()
{
	int n;
	FILE *f1;
	struct student student;
	f1=fopen("C:\\Users\\user\\Documents\\StudentRecords.dat","r");
	printf("Which record number do you want to get?\n");
	scanf("%d",&n);
	fseek(f1,(n-1)*sizeof(student),0);
	fread(&student,sizeof(student),1,f1);
	printf("Roll no = %d\nName = %s\nMarks = %.2f",student.rollno,student.name,student.marks);
	fclose(f1);
}
