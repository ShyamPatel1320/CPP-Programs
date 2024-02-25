#include<iostream>
using namespace std;
class book
{
	private:
		int p;
		char t[500],pub[500];
		public:
			void setdata()
			{
				cout<<"\nenter title=";
				cin>>t;
				cout<<"\nenter publisher=";
				cin>>pub;
				cout<<"\nenter price=";
				cin>>p;
			}
			void getdata()
			{
				cout<<"\n title="<<t<<"\n publisher="<<pub<<"\n price="<<p;
			}
};
main()
{
	book b1,b2;
	b1.setdata();
	b2.setdata();
	b1.getdata();
	b2.getdata();
}
