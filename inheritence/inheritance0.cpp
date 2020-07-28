#include<iostream>
using namespace std;
class A
{
	int a;
	public: 
	void getA()
	{
		cout<<"Enter value of A: ";
		cin>>a;
	}
	void putA()
	{
		cout<<"Value of A: "<<a;	
	}
}a;
class B:public A
{
	int b;
	public: 
	void getB()
	{
		cout<<"Enter Value of B: ";
		cin>>b;
	}
	void putB()
	{
		cout<<"Value of B is: "<<b;
	}
}b;
class C:public B,public A
{
	int c;
	public:
	void getC()
	{
		cout<<"Enter Value of C: ";
		cin>>c;
	}
	void putC()
	{
		cout<<"Value of C is : "<<c;
	}
}c;
main()
{
	b.getA();
	c.getB();
	c.getC();
	b.putA();
	c.putB();
	c.putB();
}
