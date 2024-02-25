#include<stdio.h>
main()
{
	int x,twothousand,fivehundred,twohundred,hundred,fifty,twenty,ten,five,two,one;
	printf("Enter the sum of money that you want to covert to different currency notes\n");
	scanf("%d",&x);
	twothousand=x/2000;
	fivehundred=(x%2000)/500;
	twohundred=((x%2000)%500)/200;
	hundred=(((x%2000)%500)%200)/100;
	fifty=((((x%2000)%500)%200)%100)/50;
	twenty=(((((x%2000)%500)%200)%100)%50)/20;
	ten=((((((x%2000)%500)%200)%100)%50)%20)/10;
	five=(((((((x%2000)%500)%200)%100)%50)%20)%10)/5;
	two=((((((((x%2000)%500)%200)%100)%50)%20)%10)%5)/2;
	one=((((((((x%2000)%500)%200)%100)%50)%20)%10)%5)%2;
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
