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
	char a;
	f1=fopen("C:\\Users\\user\\Documents\\StudentRecords.dat","r");
	printf("Data of student with highest marks is as follows:\n");
	printf("\nRollNo\tName\tMarks\n");
	printf("======================\n");
	while(fread(&student,sizeof(student),1,f1)>0)
	{
		if(student.marks>d)
		{
			d=student.marks;
			m=student.rollno;
		}			
	}
	fclose(f1);															// we need to close and again open the file before running while loop again as the pointer reaches the end of file when first while loop runs.
	f1=fopen("C:\\Users\\user\\Documents\\StudentRecords.dat","r");		// we will learn a function called rewind later that will take pointer to start of file
	while(fread(&student,sizeof(student),1,f1)>0)
	{
		if(student.rollno==m)
		{
			printf("%d\t%s\t%.2f\n",student.rollno,student.name,student.marks);
		}		
	}
	printf("======================\n");
	fclose(f1);
}
