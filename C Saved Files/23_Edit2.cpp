#include<stdio.h>
main()
{
	// Now we are going to use conditional sequence with if and else
	int marks;
	printf("Enter marks of student\n");
	scanf("%d",&marks);
	if(marks>=35)
	{
		printf("Student is pass");
	}
	else // 'else' is not essential for existence of 'if' but 'if' is necessary for existence of 'else'
	{
	printf("Student is fail");
	}
	printf("\nThanks");
}
