#include<stdio.h>
main()
{
	char x,y;
	printf("Enter Any Uppercase Character\n");
	scanf("%c",&x);
	printf("The Lowercase character of the entered character is %c",x+32);
	fflush(stdin);	// Why is this statement necessary?
	printf("\nEnter Any Lowercase Character\n");
	scanf("%c",&y);
	printf("The Uppercase character of the entered character is %c",y-32);
}
