#include<stdio.h>
main()
{
	int A,B,C;
	printf("Enter the 3 values of angles of a triangle\n");
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	if(A+B+C==180)
	{
		if(A<90 && B<90 && C<90)
		{
			printf("The triangle with this values of angle is an acute angled triangle");
		}
		else if(A==90 || B==90 || C==90)
		{
			printf("The triangle with this values of angle is an right angled triangle");
		}
		else
		{
			printf("The triangle with this values of angle is an obtuse angled triangle");
		}
	}
	else
	{
		printf("Invalid values. Given values of angles do not form a triangle");
	}
}
