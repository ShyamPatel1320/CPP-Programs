#include<stdio.h>
main()
{
	int x,minutes,seconds;
	printf("Enter the value of time in seconds that you want to convert to minutes and seconds");
	scanf("%d",&x);
	minutes=x/60;
	seconds=x%60;
	printf("Minutes = %d",minutes);
	printf("\nSeconds = %d",seconds);
}
