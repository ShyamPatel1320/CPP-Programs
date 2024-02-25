#include<stdio.h>
main()
{
	int p,marks;
	printf("Enter student's marks\n");
	scanf("%d",&marks);
	p=(marks>=35);
	printf("p is %d\n",p);
	if(-10) // Here, inside 'if', value is non-zero(it is -10 here).So, 'if' will always be true.It does not care what marks are entered. 'If' does not need a condition; it needs a value. False is 0 ans any other non-zero number is True
	{
		printf("Student is pass");
	}
	else
	{
		printf("Student is fail");
	}
}
