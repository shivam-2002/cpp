#include<iostream>
using namespace std;
class A
{
	public:
	A(int x,int y)
	{
		cout<<"Constructor of Class A called is: "<<ends<<x<<y<<endl;
	}
	~A()
	{
		cout<<"Destructor of Class A called is:"<<endl;
	}
};
class B:public A
{
	int a;
	public:
		B(int x,int y,int z):A(x,y)
		{
			cout<<"Constructor of class B called is:"<<endl;
			a=z;
		}
		~B()
		{
			cout<<"Value of a in Destructor of Class B is called:"<<ends<<a<<endl;
		}
};
class C:public A
{
	int q,r;
	public:C(int x,int y,int z,int w):A(x,y)
	{
		cout<<"Constructor of Class C is Called:"<<endl;
		q=z;
		r=w;
	}
	~C()
	{
		cout<<"Destructor of Class C is Called:"<<q<<ends<<r<<endl;
	}
};
int main()
{
	B b(2,3,4);
	C c(1,2,3,4);
}
