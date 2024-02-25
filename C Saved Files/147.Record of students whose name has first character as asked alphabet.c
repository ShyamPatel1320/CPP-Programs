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
	FILE *f1;
	int m=0,d=0;
	struct student student;
	char c;
	f1=fopen("C:\\Users\\user\\Documents\\StudentRecords.dat","r");
	printf("Name of students starting with which alphabet must be printed only?\n");
	scanf("%c",&c);
	fflush(stdin);
	printf("Data of students having %c as initials is as follows:\n",c);
	printf("\nRollNo\tName\tMarks\n");
	printf("======================\n");
	while(fread(&student,sizeof(student),1,f1)>0)
	{
		if(student.name[0]==c)
		{
			printf("%d\t%s\t%.2f\n",student.rollno,student.name,student.marks);
		}			
	}
	printf("======================\n");
	fclose(f1);
}
