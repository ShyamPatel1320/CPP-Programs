#include<iostream>
using namespace std;
int absolute(int x)
{
	if(x>0)
	{
		return x;
	}
	else
	{
		return (-1)*x;
	}
}
float absolute(float x)
{
	if(x>0)
	{
		return x;
	}
	else
	{
		return (-1)*x;
	}
}
double absolute(double x)
{
	if(x>0)
	{
		return x;
	}
	else
	{
		return (-1)*x;
	}
}
main()
{
	cout<<absolute(-5);
	cout<<"\n"<<absolute(-5.3);
	cout<<"\n"<<absolute(-5.328833);
}


