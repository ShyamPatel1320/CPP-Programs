#include<stdio.h>
main()
{
	// Now we are going to use conditional sequence with if
	int marks;
	printf("Enter marks of student\n");
	scanf("%d",&marks);
	if(marks>=35)
	{
		printf("Student is pass");
	}
	if(marks<35)
	{
		printf("Student is fail");
	}
	printf("\nThanks");
}
