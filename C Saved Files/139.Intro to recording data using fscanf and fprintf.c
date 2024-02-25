#include<stdio.h>
#include<string.h>
main()
{
	FILE *f1;
	int rollno,semester,total,n,i;
	char name[100],branch[100];
	printf("How many students' data you want to record?\n");
	scanf("%d",&n);
	f1=fopen("C:\\Users\\user\\Documents\\DEF.txt","w");
	for(i=0;i<n;i++)
	{
		printf("Enter roll no.,name,branch,semester and total marks of student %d\n",i+1);
		scanf("%d",&rollno);
		fflush(stdin);
		gets(name);
		gets(branch);
		scanf("%d",&semester);
		fflush(stdin);
		scanf("%d",&total);
		fflush(stdin);
		fprintf(f1,"%d %s %s %d %d\n",rollno,name,branch,semester,total);
	}	
	printf("RollNo.\tName\tBranch\tSem\tTotalMarks\n");
	printf("==========================================\n");
	fclose(f1);
	f1=fopen("C:\\Users\\user\\Documents\\DEF.txt","r");
	for(i=0;i<n;i++)
	{
		fscanf(f1,"%d\t%s\t%s\t%d\t%d\n",&rollno,name,branch,&semester,&total);
		printf("%d\t%s\t%s\t%d\t%d\n",rollno,name,branch,semester,total);
		fflush(stdin);
	}
	fclose(f1);
}
