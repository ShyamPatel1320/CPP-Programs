#include<iostream>
using namespace std;
struct emp
{
	int id;
	char name[200];
     
};
void emp(struct emp e1)
{
	cout<<"\nid="<<e1.id<<"\nname="<<e1.name;
}
main()
{
	struct emp e1;
	cout<<"enter id=";
	cin>>e1.id;
	cout<<"enter name=";
	cin>>e1.name;
	emp(e1);
}
