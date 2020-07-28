#include<iostream>
using namespace std;
class A
{
	public:
		void print()
		{
			cout<<"Class A is Called: "<<endl;
		}
};
class B:public A
{
	public:
		void print()
		{
			cout<<"Class B is Called: "<<endl;
		}
};
class C:public B
{
	public:
		void print()
		{
			cout<<"Class C is Called: "<<endl;
		}
};
int main()
{
	A a,*a1;
	B b,*b1;
	C c,*c1;
	a1=&a;
	a1->print();
	a1=&b;
	a1->print();
	a1=&c;
	a1->print();
	b1=&b;
	b1->print();
	b1=&a;
	b1->print();
	b1=&c;
	b1->print();
	c1=&c;
	c1->print();
	c1=&a;
	c1->print();
	c1=&b;
	c1->print();
}
