#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	*x=(*x)+(*y);
	*y=(*x)-(*y);
	*x=(*x)-(*y);
}
main()
{
	int a,b;
	cout<<"enter a=";
	cin>>a;
	cout<<"enter b=";
	cin>>b;
	swap(&a,&b);
	cout<<"a="<<a<<"b="<<b;
}
