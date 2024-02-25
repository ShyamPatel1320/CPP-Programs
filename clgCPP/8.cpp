#include<iostream>
using namespace std;
inline int mul(int a,int b)
{
	return a*b;
}
inline int div(int x,int y)
{
	return x/y;
}
main()
{
	cout<<"mul="<<mul(3,2)<<"\ndiv="<<div(6,3);
}
