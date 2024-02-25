#include<iostream>
using namespace std;
class test
{
	private:
		int a;
		public:
			test()
			{
				a=7;
			}
			test(int x)
			{
				a=x;
			}
			public : int get()
			{
				return a;
			}
			~test()
			{
				cout<<"\n bye";
			}
			void printdata()
			{
				cout<<"\n a="<<a;
			}			
};
int square(test t1)
{
	int a=t1.get();
	return a*a;
}
main()
{
	test t1;
	t1.printdata();
	cout<<"\n square="<<square(t1);	
}
