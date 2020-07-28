#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		void getA()
		{
			cout<<"Enter Value of A: ";
			cin>>a;
		}
		void putA()
		{
			cout<<"Value of A: "<<a;
		}
}a;

class B:virtual public A
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
			cout<<"\nValue of B: "<<b;
		}
}b;
class C
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
		cout<<"\nValue of C: "<<c;
	}
}c;

class D:public B,public C
{
	int d;
	public:
		void getD()
		{
			cout<<"Enter Value of D: ";
			cin>>d;
		}
		void putD()
		{
			cout<<"\nValue of D: "<<d;
		}
}d;
main()
{
	d.getA();
	d.getB();
	d.getC();
	d.getD();
	d.putA();
	d.putB();
	d.putC();
	d.putD();
}
