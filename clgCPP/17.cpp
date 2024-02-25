#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
		public:
			void setdata()
			{
				cout<<"enter real number=";
				cin>>a;
				cout<<"enter imaginary number=";
				cin>>b;
			}
			void setdata(int x)
			{
				a=x;
				b=x;
			}
			void setdata(int x,int y)
			{
				a=x;
				b=y;
			}
			void printdata()
			{
				cout<<"\n"<<a<<"+"<<b<<"i";
			}
};
int main()
{
	complex c1,c2,c3;
	c1.setdata();
	c1.printdata();
	c2.setdata(2);
	c2.printdata();
	c3.setdata(4,5);
	c3.printdata();
}
