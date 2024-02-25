#include<iostream>
using namespace std;
//int main(){
//	int a,b;
//	char n;
//	cout<<"Enter number of a=";
//	cin>>a;
//	cout<<"Enter the number of b=";
//	cin>>b;
//	cout<<"Enter sign for calculation:";
//	cin>>n;
//	switch(n){
//		case '+':
//			cout<<"Addition is:"<<a+b;
//			break;
//		case '-':
//			cout<<"Substraction is:"<<a-b;
//			break;
//		case '*':
//			cout<<"Multiplication is:"<<a*b;
//			break;
//		case '/':
//			cout<<"Division is:"<<a/b;
//			break;
//		default:
//			cout<<"Something went wrong!";
//			break;
//	}
//	return 0;
//}

//***********************************
//int main(){
//	int a,i,n;
//	cout<<"Enter number to print table:";
//	cin>>n;
//	for(i=1;i<11;i++){
//		cout<<n<<"*"<<i<<"="<<n*i<<"\n";
//	}
//}
//int main(){
//	int n;
//	cout<<"Enter n:";
//	cin>>n;
//	while(true){
//		cout<<n<<"\n";
//		n = n+1;
//		if(n==100){
//			break;
//		}
//	}
//}
//************************************

//int main(){
//	int n;
//	cout<<"Enter your age:";
//	cin>>n;
//	if(n>18 && n<45){
//		cout<<"You are Adult";
//	}
//	else if(n<18 and n>0){
//		cout<<"You are child";
//	}
//	else{
//		cout<<"You are senior citization";
//	}
//}


//**********************************
//int printfunction(string s){
//	cout<<"Call from function:"<<s;
//	int a=10;
//	return a; 
//}
//int main(){
//	string x;
//	cout<<"Enter value of x:";
//	getline(cin,x);
//	cout<<printfunction(x);
//}

//*********************************
//int main(){
//	int n,fact;
//	cout<<"Enter value of n:";
//	cin>>n;
//	fact = 1;
//	for(int i=1;i<n+1;i++){
//		fact = fact*i;
//	}
//	cout<<"Factorial="<<fact;
//}


//*********************************
//int main(){
//	int n,t1=0,t2=1,next;
//	cout<<"Enter value of n:";
//	cin>>n;
//	for(int i=1;i<n;i++){
//		if(i==1){
//			cout<<t1<<",";
//			continue;
//		}
//		if(i==2){
//			cout<<t2<<",";
//			continue;
//		}
//		next = t1+t2;
//		t1=t2;
//		t2 = next;
//		cout<<next<<",";		
//	}	
//}


//**********************************
//int main(){
//	int n,rem,sum=0;
//	cout<<"Enter number:";
//	cin>>n;
//	while(n!=0){
//		rem = n%10;
//		sum = sum + (rem*rem*rem);
//		n = n/10;
//	}
//	cout<<"Sum="<<sum;
//}


//***********************
//int main(){
//	int n,n1,d1,rev=0;
//	cout<<"Enter n:";
//	cin>>n;
//	n1 = n;
//	while(n!=0){
//		d1 = n%10;
//		rev = (rev*10)+d1;
//		n = n/10;
//	}
//	if(rev==n1){
//		cout<<"Number is Armstrong";
//	}
//	else{
//		cout<<"Number is not Armstrong";
//	}
//}

//********************************
//int main(){
//	int n;
//	bool prime = true;
//	cout<<"Enter n:";
//	cin>>n;
//	if(n<2){
//		prime = false;
//	}
//	for(int i=2;i<n;i++){
//		if(n%i==0){
//			prime = false;
//			break;
//		}
//	}
//	if(prime){
//		cout<<"It is Prime Number";
////		printf("%d is prime",n);
//	}
//	else{
//		cout<<"Not prime";
//	}
//}


//******************************************goto statement

//int main(){
//	int a,b,c;
//	cout<<"Enter value of a:"<<endl;
//	cin>>a;
//	cout<<"Enter value of b:"<<endl;
//	cin>>b;
//	cout<<"a="<<a<<"\nb="<<b<<endl;
//	goto sum;
//	cout<<"Hello";
//	sum:
//		c = a+b;
//		cout<<"sum = "<<c;
//
//	return 0;
//}



//********************************************function overloading

//int getnum(int n){
//	cout<<"Your int type number is :"<<n<<endl;
//}
//float getnum(float n){
//	cout<<"Your float type number is :"<<n<<endl;
//}
//double getnum(int n){
//	cout<<"Your double type number is :"<<n<<endl;
//}
//int getnum(int n,int n1){
//	cout<<"Your sum is :"<<n+n1<<endl;
//}
//int main(){
//	getnum(5);
//	getnum(2,4);
//	getnum(3.3f);
//	getnum(2.2);
//	return 0;
//}


//***************************************Default argument

//void sum(char c= 's',int n= 5,double d= 5.5);
//int main(){
//	int n;
//	char c;
//	double d;
//	sum('+',6,0.9);
//}
//void sum(char c,int n,double d){
//	cout<<"char="<<c<<"\nint="<<n<<"\ndouble="<<d;
//}


//******************************************static 
//void test(){
////	int x=0; without static output is 1,1
//	static int x=0;
////	cout<<"before:"<<x<<endl;
//	x++;
//	cout<<"After:"<<x<<endl;
//}
//int main(){
//	test();//output 1
//	test();//x is not initializa again , x=1 and output x=2 bcz. static
//}



//*******************************************fibonacci with recursion

//int fibo(int x){
//	if(x>1){
//		return (fibo(x-1)+fibo(x-2));
//	}
//	else{
//		return x;
//	}
//}
//int main(){
//	int x=10;
//	for(int i=0;i<x;i++){
//		cout<<fibo(i)<<endl;
//	}
//	return 0;
//}


//******************************************* call by value

//void change(int x){
//	x = 15;
//}
//int main(){
//	int x;
//	x=10;
//	change(x);
//	cout<<x;
//}

//*********************************************call by reference
//void change(int *x){
//	*x=20;
//}
//int main(){
//	int x;
//	x = 10;
//	change(&x);
//	cout<<x;
//}


//***********************************************array

//int main(){
//	int x[] = {1,2,3};//default size infinite
//	int z[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//	int y[5] = {1,2,3,4};//max size=5
//	y[2] = 10;//update
//	y[4] = 5; // insert
//	for(int i =0;i<4;i++){
//		for(int j=0;j<3;j++){
//			cout<<"  "<<z[i][j];
//		}
//		cout<<"\n";
////		cout<<x[i];
////		cout<<y[i]<<endl;
//	}
//}

//*******************************************Structure || structure with function

//struct mystruct{
//	int id;
//	char myfavchar;
//	double salary;
//	string st;
//};

// void hello(mystruct);

////typedef struct mystruct{
////	int id;
////	char myfavchar;
////	double salary;
////	string st;
////}mst;
//int main(){
////	mst m1;
//	mystruct m1;
//	m1.st = "shyam patel";
//	cout<<m1.st;
//	cout<<"Enter your id:";
//	cin>>m1.id;
//	cout<<"Enter your character:";
//	cin>>m1.myfavchar;
//	cout<<"Enter your salary:";
//	cin>>m1.salary;
//	cout<<"Your id:"<<m1.id<<endl;
//	cout<<"Your favourite character:"<<m1.myfavchar<<endl;
//	cout<<"Your salary:"<<m1.salary<<endl;
//	hello(m1);
//}

//void hello(mystruct m1){
//	cout<<m1.salary;
//}

//******************************************Union

//union firstuno{
//	int id;
//	char namechar;
//	double salary;
//};
//int main(){
//	firstuno f1,f2,f3;
//	f1.id = 5;
////	f1.namechar = 'c';//display garbage value bcz point f1 value again
//	f2.namechar = 'c';
//	cout<<f1.id;
//	cout<<f2.namechar;
//}


//*******************************************Simple class

//class demo{
//	private:
//		int a,b,c;
//		static int f;
//	public:
//		int d,e;
//		void setData(int a1,int b1,int c1);
//		void getData(){
//			cout<<"\nValue of a is "<<a;
//			cout<<"\nValue of b is "<<b;
//			cout<<"\nValue of c is "<<c;
//			cout<<"\nValue of d is "<<d;
//			cout<<"\nValue of f is "<<f;
//		}
//};
//int demo :: f = 200; // static member accessed from class
//void demo :: setData(int a1,int b1,int c1){
//	a = a1;
//	b = b1;
//	c = c1;
//}
//int main(){
//	demo d1;
//	d1.d = 20; 
//	d1.setData(1,2,4);
//	d1.getData();
//	return 0;
//}


//*******************************************constructor

//class construct{
//	private:
//		int n;
//	public:
//		construct(){
//			n=10;
//			cout<<"Your default constructor will give number:"<<n<<endl;
//		}
//		construct(int x,int y){
//			cout<<"Your constructor sum is:"<<x+y<<endl;
//		}
//};
//int main(){
//	construct c1,c2(2,3),c3(6,6);
//	return 0;
//}
//*******************************************pass object as an argument

//class college{
//	public:
//		int mark;
//		college(int n){
//			mark = n;
//		}
//};
//
//void average(college c1,college c2){
//	cout<<"Average="<<(c1.mark+c2.mark)/2;
//}
//
//int main(){
//	college c1(90),c2(100);
//	average(c1,c2);
//}

//**********************memory allocation using array
//class shop{
//	int itemPrice[100],itemCount;
//	string itemName[100];
//	public:
//		void itemCounter(){
//			itemCount = 0;
//		}
//		void setItems(){
//			cout<<"\nEnter Item Name ";
//			cin.ignore();
//			getline(cin,itemName[itemCount]);
//			cout<<"\nEnter Item Price ";
//			cin>>itemPrice[itemCount];
//			itemCount++;
//		}
//		void displayItem();
//};
//void shop :: displayItem(){
//	for(int i=0;i<itemCount;i++){
//		cout<<itemName[i]<<" : $"<<itemPrice[i]<<endl;
//	}
//}
//int main(){
//	shop s1;
//	s1.itemCounter();
//	s1.setItems();
//	s1.setItems();
//	s1.setItems();
//	s1.setItems();
//	s1.setItems();
//	s1.displayItem();
//	return 0;
//}


//*****************************Inheritance
//class parent{
//	public:
//		int a,b;
//		void setdata(int a1,int b1){
//			a = a1;
//			b = b1;
//		}
//};
//class child : public parent{
//	public:
//		void datasum(){
//			cout<<"Sum:"<<a+b;
//		}
//};
//int main(){
//	child c1;
//	c1.setdata(5,6);
//	c1.datasum();
//	return 0;
//}

//*******************************************Multilevel Inheritace

//class grandfather{
//	public:
//		int sal;
//		grandfather(){
//			sal = 50000;
//		}
//		void hello(){
//			cout<<"Hello from grandfather."<<endl;
//		}
//};
//class father : public grandfather{
//	public:
//		int sethello(int fsal){
//			cout<<"I am father class and I stole my grandfather's salary:"<<fsal<<endl;
//		}
//};
//class son : public father{
//	public:
//		void king(){
//			cout<<"I am king of all classes"<<endl;
//		}
//};
//int main(){
//	son s;
//	father f1;
//	grandfather g1;
//	s.king();
//	s.hello();
//	s.sethello(g1.sal);
//}




//###############################################IMP Practice for interview
//int main(){
//	int n,x,sum=0,c;
//	cout<<"Enter the number:";
//	cin>>n;
//	c = n;
//	while(n!=0){
//		x = n%10;
//		sum = sum + (x*x*x);
//		n = n/10;
//	}
//	if(sum == c){
//		cout<<"sum = "<<sum<<" and it is a Armstrong number.";
//	}
//	else{
//		cout<<"sum = "<<sum<<" and it is not an Armstrong number.";
//	}
//}


//#####################

int main(){
	int n,prime=true;
	cout<<"Enter number:";
	cin>>n;
	if(n<2){
		prime = false;
	}
	for(int i=2;i<n;i++){
		if(n%i == 0){
			prime = false;
			break;
		}
	}
	if(prime){
		cout<<"It is Prime number";
	}
	else{
		cout<<"It is not a Prime number";
	}
}
