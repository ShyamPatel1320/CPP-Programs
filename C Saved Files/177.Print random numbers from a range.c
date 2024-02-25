#include <stdio.h>
#include <time.h>
#include <stdlib.h>
main()
{
	int i,d;
	srand(time(NULL)); /* time(NULL) returns time in seconds since the epoch; this seeds the random
						number function with a new number.Only call this once per program. */
	for (i=0; i<10; i++)
	{
		d=rand()%100; // returns values in the range 0-99
		if(d>9)	// Sets lower limit of all numbers
		{
			printf("%d\n",d);
		}
		else
		{
			i--;
		}
	}
}
