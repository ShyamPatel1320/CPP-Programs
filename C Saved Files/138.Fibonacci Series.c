#include<stdio.h>
main()
{
	int n,i=0,s=0,d=1,c=0;
	char string[200];
	printf("Till how many numbers do you want to print the Fibonacci Series?\n");
	scanf("%d",&n);
	printf("The Fibonacci Series is as follows:\n");
	string[0]=0;
	string[1]=1;
	printf("0\n1\n");
	for(i=2;i<n;i++)
	{
		string[i]=string[i-1]+string[i-2];
		printf("%d\n",string[i-1]+string[i-2]);
	}
}

