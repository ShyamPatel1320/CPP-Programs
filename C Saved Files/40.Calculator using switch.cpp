#include<stdio.h>
main()
{
	int b,c;
	char a;
	printf("Enter + for addition\nEnter - for substraction\nEnter * for multiplication \nEnter / for division\n");
	scanf("%c",&a);
	switch(a)
	{
		case '+': printf("You chose additon\nEnter first number\n");
			scanf("%d",&b);
			printf("Enter second number\n");
			scanf("%d",&c);
			printf("Addition of %d and %d is %d",b,c,b+c);
			break;
		case '-':	printf("You chose substraction\nEnter first number\n");
			scanf("%d",&b);
			printf("Enter second number\n");
			scanf("%d",&c);
			printf("Substraction of %d from %d gives %d",c,b,b-c);
			break;
		case '*':	printf("You chose multiplication\nEnter first number\n");
			scanf("%d",&b);
			printf("Enter second number\n");
			scanf("%d",&c);
			printf("Multiplication of %d and %d is %d",c,b,b*c);
			break;
		case '/':	printf("You chose division\nEnter first number\n");
			scanf("%d",&b);
			printf("Enter second number\n");
			scanf("%d",&c);
			printf("Division of %d by %d gives %d",b,c,b/c);
			break;
		default: printf("Invalid choice");
	}
}
