#include<stdio.h>
void main()
{
	int i,n,a[100],s1=0,s2=0,c1=0,c2=0;
	printf("enter the value of n=");
	scanf("%d",&n);
		
		for(i=0;i<n;i++)
		{
		printf("\n enter value of a[%d] =>",i);
		scanf("%d",&a[i]);
		}
		
		
		for(i=0;i<n;i++)
		{
		if(a[i]%2==0)
		{
			printf("\n %d is even",a[i]);
			s1=s1+a[i];
			c1++;
		}
		else
		{
			printf("\n %d is odd",a[i]);
			s2=s2+a[i];
			c2++;
		}
	}
	printf("\n total even numbers=%d count = %d",s1,c1);
    printf("\n total odd numbers=%d count = %d",s2,c2);
}
