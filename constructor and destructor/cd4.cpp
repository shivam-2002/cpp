#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
	public:
	A()
	{
		cout<<"This is Hybrid Inheritance"<<endl;
		cout<<"Enter Value of x: ";
		cin>>x;
	}
	~A()
	{
		cout<<"Destructor called of class A:"<<endl;
	}
};
class B
{
	protected:
		int y;
	
	public:
	B()
	{
		cout<<"Constructor of Class B is called: "<<endl;
		cout<<"Enter Value of Y;";
		cin>>y;
	}
	~B()
	{
		cout<<"Destructor of class B is Called:"<<endl;
	}
};
class C:public A,public B
{
	public:
	 C()
	{
		cout<<"Constructor of class C is called: "<<endl;
		cout<<"Value of x and y are: "<<x<<ends<<y<<endl;
	}
	~C()
	{
		cout<<"Destructor of Class C is called: "<<endl;
	}
	
};
class D:public C
{
	public:
		D()
		{
			cout<<"Constructor od class D is called: "<<endl;
			cout<<"D is single inheritance of C"<<endl;
		}
		~D()
		{
			cout<<"Destructor of class D is called:"<<endl;
		}
};
int main()
{
	C c;
	D d;
}
