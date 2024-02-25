#include<stdio.h>
main()
{
	char name[200];
	printf("Enter your name\n");
	gets(name);
	printf("Name is %s",name);
	// we can also use scanf("%s",name) for asking the name but this will make name function as a string.So, we can not do any operation on it.
}
