#include<iostream>
using namespace std;
class stud
{
	private:
		static int x;
		int no;
		char name[20];
		public:
			void setdata()
			{
				cout<<"\nenter name=";
				cin>>name;
				x++;
				no=x;
			}
			void printdata()
			{
				cout<<"\nno="<<no<<"\tname="<<name;
			}
			static void printcnt()//cnt for count
			{
				cout<<"\n total objects="<<x;
			}
};
int stud::x; 
int main()
{
	stud s1,s2,s3;
	s1.setdata();
	s2.setdata();
	s3.setdata();
	s1.printdata();
	s2.printdata();
	s3.printdata();
	stud::printcnt();
	return 0;
}
