#include<stdio.h>
main()
{
	int a;
	printf("Enter any value\n");
	scanf("%d",&a);
	printf("Value entered is %d",a);
	a=a+1;
	printf("\nOn performing a=a+1, we get new value of a as %d",a);
	printf("\nNow, performing a+=1, we get new value of a as %d",a+=1); // += is a short hand operator 
	printf("\nNow, performing a++, we get new value of a as %d",a++); // a++ is post increament of 1 in a
	printf("\nNow, performing ++a, we get new value of a as %d",++a); // ++a is pre increament of 1 in a
	printf("\nNow, performing a-=1, we get new value of a as %d",a-=1); // -= is a short hand operator
	printf("\nNow, performing a--, we get new value of a as %d",a--); // a-- is post increament of 1 in a
	printf("\nNow, performing --a, we get new value of a as %d",--a); // --a is pre increament of 1 in a
	printf("\nNow, performing a*=2, we get new value of a as %d",a*=2); // *= is a short hand operator
	printf("\nNow, performing a/=2, we get new value of a as %d",a/=2); // /= is a short hand operator
	printf("\nNow, performing a%%=2, we get new value of a as %d",a%=2); // %= is a short hand operator
}
