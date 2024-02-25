#include<iostream>
using namespace std;
	void power(double m,int n);
int main()
{
	int i,x=1,n,m;
	
	{
		cout<<"m="<<m<<"\nn="<<n;
	}
	for(i=1;i<=n;i++)
	{
		x=x*n;
	}
	cout<<"\n"<<x;
	
}
