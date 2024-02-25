#include<stdio.h>
void main()
{
	int n;
	printf("enter the month number n=");
	scanf("%d",&n);
	switch(n)
{
	case 1:
	{
		printf("\n january");

		break;
	}
	case 2:
	{
		printf("\n february");
		break;
	}
	case 3:
	{
		printf("\n march");
		break;
	}
	case 4:
	{
		printf("\n aprile");
		break;
	}
	case 5:
	{
		printf("\n may");
		break;
	}
	default:
		printf("\n wronge entry");
}
}
