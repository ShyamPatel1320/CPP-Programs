#include<iostream>
using namespace std;
class B;
class A
{
	private:
		int a;
		public:
			void setdata()
			{
				cout<<"\nenter a=";
				cin>>a;
			}
			void printdata()
			{
				cout<<"\n a="<<a;
			}
			void friend max( A a1,B b1);
};
class B
{
	private:
		int b;
		public:
			void setdata()
			{
				cout<<"\n enter b=";
				cin>>b;
			}
			void printdata()
			{
				cout<<"\n b="<<b;
			}
			void friend max(A a1,B b1);
};
void max(A a1,B b1)
{
	if(a1.a>b1.b)
	{
		cout<<"a max";
	}
	else
	{
		cout<<"\nb max";
	}
};
int main()
{
    A a1;	
    B b1;
    a1.setdata();
    a1.printdata();
    b1.setdata();
    b1.printdata();
    max(a1,b1);
}
