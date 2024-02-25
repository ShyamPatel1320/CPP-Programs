#include<stdio.h>
void main()
{
	int hindi,english,maths,Total;
	printf("enter the marks of hindi=");
	scanf("%d",&hindi);
	printf("enter the mark of english=");
	scanf("%d",&english);
	printf("enter the mark of maths=");
	scanf("%d",&maths);
	Total=(hindi+english+maths);
	if(Total>=50)
	{
	printf("Total mark=%d he is pass",Total);
	}
	else
	{
	printf("Total mark=%d he is fail",Total);
	}
}
