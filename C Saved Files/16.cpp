#include<stdio.h>
main()
{
	int x,hours,minutes,seconds;
	printf("Enter value you want to convert to hours, minutes and seconds");
	scanf("%d",&x);
	hours=x/3600;
	minutes=(x%3600)/60;
	seconds=(x%3600)%60;
	printf("Hours = %d",hours);
	printf("\nMinutes = %d",minutes);
	printf("\nSeconds = %d",seconds);
}
