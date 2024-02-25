#include<iostream>
using namespace std;
class complex
{
	private:
	int a,b;
	public:
		complex()
		{
			a=4;
			b=5;
		}
		complex(int x,int y)
		{
			a=x;
			b=y;
		}
		void printdata()
		{
			cout<<"\n"<<a<<"+"<<b<<"i";
		}
		~complex()
		{
			cout<<"\n bye";
		}
		complex add(complex c2);
};
complex complex::add(complex c2)
{
	complex c3;
	c3.a=a+c2.a;
	c3.b=b+c2.b;
	return c3;
}

main()
{
	complex c1(2,3),c2(10,20),c3;
	c1.printdata();
	c2.printdata();
	c3=c1.add(c2);
	c3.printdata();
	
}
