#include<stdio.h>
main()
{
	int	s,ns,ts,b1,b2,b3;
	printf("What is the base salary (per annum) of a person?\n");
	scanf("%d",&s);
	printf("What percentage of extra profit of company does he get?\n");
	scanf("%d",&b1);
	printf("How much percentage of his salary with shares in company he gets as extra?\n");
	scanf("%d",&b2);
	printf("What percentage of bonuses on his base salary does he receive?\n");
	scanf("%d",&b3);
	ts=s+b1+b2+b3;
	if(ts<=250000)
	{
		ns=ts;
	}
	else if(ts<=1000000)
	{
		ns=(ts-250000)*0.9 + 250000;
	}
	else if(ts<=2500000)
	{
		ns=(ts-1000000)*0.8 + 750000*0.9 + 250000;
	}
	else if(ts<=10000000)
	{
		ns=(ts-2500000)*0.6 + 1500000*0.8 + 750000*0.9 + 250000;
	}
	else
	{
		ns=(ts-10000000)*0.5 + 7500000*0.6 + 1500000*0.8 + 750000*0.9 + 250000;
	}
	printf("The salary that employee receives in hand at end of year is %d",ns);
}
