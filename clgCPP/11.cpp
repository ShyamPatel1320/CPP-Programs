#include<iostream>
using namespace std;
int cube(int x)
{
	return x*x*x;
}
int cuboids(int l,int b,int h)
{
	return l*b*h;	
}
float cylinder(float r,float h)
{
	return 3.14*r*r*h;
}
main()
{
	cout<<cube(4);
	cout<<"\n"<<cuboids(3,4,5);
	cout<<"\n"<<cylinder(6,2);
}
