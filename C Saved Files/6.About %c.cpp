#include<stdio.h>
main()
{
	printf("%c",'A'); // if single letter is printed in '', then it acts as character and is printed as character if format specifier is %c 
	printf("\n%d",'A'); // as format specifier is %d, the ASCII code of alphabet A will be printed
	printf("\n%c",'B'); 
	printf("\n%d",'B');
	printf("\n%c",'a');
	printf("\n%d",'a');
	printf("\n%c",'0'); // 
	printf("\n%d",'0'); //
	printf("\n%d",0); //
	printf("\n%c",65); // alphabet or symbol having ASCII code 65 is printed
	printf("\n%c",234); // C language and DevC++ supports extended ASCII codes also. Basic ASCII codes are from 0 to 127 only.Extended are from 128 to 255.
}
