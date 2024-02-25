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
	struct student student;
	char a;
	f1=fopen("C:\\Users\\user\\Documents\\StudentRecords.dat","r");
	printf("Records are as follows:\n");
	printf("\nRollNo\tName\tMarks\n");
	printf("======================\n");
	while(fread(&student,sizeof(student),1,f1)>0)
	{
		if(student.marks>=35)
		{
			printf("%d\t%s\t%.2f\n",student.rollno,student.name,student.marks);
		}			
	}
	printf("======================\n");
	fclose(f1);
}
