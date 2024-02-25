#include<iostream>
#include<string.h>
using namespace std;
class stud
{
	private:
		char name[30];
		public:
			void setdata()
			{
				cout<<"\n enter name=";
				cin>>name;
			}
			void printdata()
			{
				cout<<"\nname="<<name;
			}		
			stud operator+(stud s2)
			{
				stud s3;
				
				strcpy(s3.name,name);
				strcat(s3.name,s2.name);		
				return s3;
			}
	stud operator==(stud s2)
	{
	stud s3;
	int x,y;
	x=strlen(name);
	y=strlen(s2.name);
	
	if(x>y)
	{
		strcpy(s3.name,name);
	}
	else
	{
		strcpy(s3.name,s2.name);
	}	
	return s3;	
}	

int operator<=(stud s2)
{
	return strcmp(name,s2.name);
}

void length()
{
	cout<<"\n"<<strlen(name);
}
		
};
main()
{
	stud s1,s2,s3,s4;
	s1.setdata();
	s2.setdata();
	s1.printdata();
	s2.printdata();
	s3=s1+s2;
	s3.printdata();
	s3=s1==s2;
	s3.printdata();
	s1.length();
	s2.length();
	
	int ans=(s1<=s2);
	
	if(ans==0)
	{
		cout<<"\nBoth are equal";
	}
	else
	{
		cout<<"\nBoth are different";
	}
}
