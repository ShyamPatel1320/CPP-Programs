#include<iostream>
using namespace std;
class time
{
	int hr,min,sec;
	public:
		void setdata()
		{
			cin>>hr>>min>>sec;
		}
		void printdata()
		{
			cout<<hr<<":"<<min<<":"<<sec;
			
		}
		void sum(time,time);
};
void time::sum(time t1,time t2)
{
	sec=t1.sec+t2.sec;
	min=sec/60;
	sec=sec%60;
	min=min+t1.min+t2.min;
	hr=min/60;
	min=min%60;
	hr=hr+t1.hr+t2.hr;
}
int main()
{
	time t1,t2,t3;
	t1.setdata();
	t1.printdata();
	t2.setdata();
	t2.printdata();
	t3.sum(t1,t2);
	cout<<"\nThe resultant time is";
	t3.printdata();
	
}
