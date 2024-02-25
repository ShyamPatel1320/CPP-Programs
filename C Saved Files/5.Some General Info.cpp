#include<stdio.h>
main()
{
	printf("12");		// Anything inside quotes, acts as a string.So, 12 is a string 
	printf("\n%d",12);  // Here 12 is outside quotes, so this acts as an integer
	printf("12+12");    // If we don't write \n, line does not break
	printf("\n12+12");  // Here, 12+12 is a string. C does not see it as a mathematical operator
	printf("\n%d",12+12);// Here, + is outside strings.So, it acts as a mathematial operator
	printf("\n%d+%d=%d",12,17,12+17);
}
