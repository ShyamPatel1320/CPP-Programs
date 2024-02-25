#include<iostream>
using namespace std;
int fe(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fe(n-1);
	}
}
int fb(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return fb(n-1)+fb(n-2);
	}
}
int main()
{
	int n,i;
	cout<<"enter n=";
	cin>>n;
	cout<<"fact of"<<n<<endl;
	for(i=n;i>0;i--){
		cout<<i<<"*";
	}
	cout<<"="<<fe(n)<<endl;
	cout<<n<<" febo =";
	for(i=0;i<n;i++)
	{
		cout<<fb(i)<<"+";
	}
}
