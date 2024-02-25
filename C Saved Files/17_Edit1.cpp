#include<stdio.h>
main()
{
	int x,rem,twothousand,fivehundred,twohundred,hundred,fifty,twenty,ten,five,two,one;
	printf("Enter the sum of money that you want to covert to different currency notes\n");
	scanf("%d",&x);
	twothousand=x/2000;
	rem=x%2000;
	fivehundred=rem/500;
	rem=rem%500; // converts value of rem into new value by performing the given operation
	twohundred=rem/200;
	rem=rem%200; // converts the previous value of rem into new value of rem by performing the given operation.It does not use the initial(first) value of rem for procedure.
	hundred=rem/100;
	rem=rem%100;
	fifty=rem/50;
	rem=rem%50;
	twenty=rem/20;
	rem=rem%20;
	ten=rem/10;
	rem=rem%10;
	five=rem/5;
	rem=rem%5;
	two=rem/2;
	rem=rem/2;
	one=rem;
	printf("Notes of two thousand = %d",twothousand);
	printf("\nNotes of five hundred = %d",fivehundred);
	printf("\nNotes of two hundred = %d",twohundred);
	printf("\nNotes of hundred = %d",hundred);
	printf("\nNotes of fifty = %d",fifty);
	printf("\nNotes of twenty = %d",twenty);
	printf("\nNotes of ten = %d",ten);
	printf("\nNotes of five = %d",five);
	printf("\nNotes of two = %d",two);
	printf("\nNotes of one = %d",one);
	printf("\nIntersetingly, this is the way you can pay Rs.%d using least number of notes",x);
}
	
