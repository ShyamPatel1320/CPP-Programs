#include<stdio.h>
main()
{
	int p,marks;
	printf("Enter student's marks\n");
	scanf("%d",&marks);
	p=(marks>=35);
	printf("p is %d\n",p);
	if(p)
	{
		printf("Student is pass");
	}
	else
	{
		printf("Student is fail");
	}
}
