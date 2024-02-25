#include<stdio.h>
main()
{
	int a,x;
	printf("Enter 1 for square\nEnter 2 for cube\nEnter 3 for odd-even\n");
	scanf("%d",&x);
	
	switch(x)
	{
		case 1: printf("Enter any number\n");
			scanf("%d",&a);
			printf("Square of %d is %d",a,a*a);
			break;
		case 2: printf("Enter any number\n");
			scanf("%d",&a);
			printf("Cube of %d is %d",a,a*a*a);
			break;
		case 3: printf("Enter any number\n");
			scanf("%d",&a);
			switch(a%2)
			{
				case 0: printf("%d is even",a);
				break;
				default: printf("%d is odd",a);
			}
			break;
		default: printf("Invalid number");
	}
}
