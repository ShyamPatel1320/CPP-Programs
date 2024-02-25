#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
	i=4;
	switch(i)
	{
		case 3:
			printf("\n three");
		case 4:
		    printf("\n four");
			break;
			default:
			printf("invalid");	
		}	
		return 0;
}
