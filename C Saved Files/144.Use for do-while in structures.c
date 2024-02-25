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
	f1=fopen("C:\\Users\\user\\Documents\\StudentRecords.dat","w");
	do
	{
		printf("Enter roll number\n");
		scanf("%d",&student.rollno);
		fflush(stdin);
		printf("Enter name\n");
		scanf("%s",&student.name);
		fflush(stdin);
		printf("Enter marks\n");
		scanf("%f",&student.marks);
		fflush(stdin);
		fwrite(&student,sizeof(student),1,f1);
		printf("Type y for entering a new data otherwise enter any character to exit\n");
		scanf("%c",&a);
		fflush(stdin);
	}while(a=='Y'|| a=='y');
	printf("Data input successfully completed\n");
	fclose(f1);
	f1=fopen("C:\\Users\\user\\Documents\\StudentRecords.dat","r");
	printf("\nRecords are as follows:\n");
	printf("\nRollNo\tName\tMarks\n");
	printf("======================\n");
	while(fread(&student,sizeof(student),1,f1)>0)
	{
		printf("%d\t%s\t%.2f\n",student.rollno,student.name,student.marks);
	}
	printf("======================\n");
	fclose(f1);
}
