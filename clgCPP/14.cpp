#include<iostream>
using namespace std;
class book
{
	private:
		int p1;
		public:
			void setdata()
			{
				cout<<"\nEnter book price=";
				cin>>p1;
			}
			void printdata()
			{
				cout<<"\np1="<<p1;
			}
			book max(book b2)
			{
				if(p1>b2.p1)
				{
					cout<<"\n1st book price max";
				}
				else
				{
					cout<<"\n2nd book price max";
				}
			}
};
int main()
{
	book b1,b2;
	b1.setdata();
	b2.setdata();
	b2.printdata();
	b1.max(b2);
}
