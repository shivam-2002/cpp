#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
	public:
		A()
		{
			cout<<"Constructor of Class A is called:"<<endl;
		}
		~A()
		{
			cout<<"Destructor of class A is called:"<<endl;
		}
};
class B:public A
{
	public:
		B()
		{
			cout<<"Constructor f class B is called:"<<endl;
		}
		~B()
		{
			cout<<"Destructor of class B is called: "<<endl;
		}
};
class C:public A
{
	public:
		C()
		{
			cout<<"Constructor of class C is called:"<<endl;
		}
		~C()
		{
			cout<<"Destructor of class C is called"<<endl;
		}
};
main()
{
	B b;
	C c;
}
