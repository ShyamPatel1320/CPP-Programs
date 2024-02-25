#include<stdio.h>
void main()
{
	int n;
	printf("enter n=");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			printf("\nJanuary");
			break;
		case 2:
			printf("\n February");
			break;
		case 3:
		    printf("\n march");
		    break;
		case 4:
			printf("\n aprile");
			break;
		case 5:
			printf("\n may");
			break;		
		default:
			printf("\nWrong opt");
	}
}
