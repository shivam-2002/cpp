#include<iostream>
using namespace std;
class A
{
	protected:int x;
	public:
	A()
	{
		cout<<"Enter Value of X: ";
		cin>>x;
	}
	~A()
	{
		cout<<"Destroctor of Class A is called"<<endl;
		}	
};
class B
{
	protected:int y;
	public:
	B()
	{
		cout<<"Enter value of y: ";
		cin>>y;
	}
	~B()
	{
		cout<<"Destroctor of Class B is called"<<endl;
	}
};
class C:public A,public B
{
	public:
	C()
	{
		cout<<"Value of x and y are: "<<x<<ends<<y<<endl;
	}
	~C()
	{
		cout<<"Destructor of Class C is called"<<endl;
	}
};
int main()
{
	C c;
}
