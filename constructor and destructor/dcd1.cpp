#include<iostream>
using namespace std;
class A
{
	public:
		A(int x)
		{
			cout<<"Constructor of Class A is called:"<<x<<endl;
		}
		~A()
		{
			cout<<"Destructor of class A is called:"<<endl;
		}
};
class B:public A
{
	public:
		B(int x):A(x)
		{
			cout<<"Constructor f class B is called:"<<x<<endl;
			//x=y;
		}
		~B()
		{
			cout<<"Destructor of class B is called: "<<endl;
		}
};
class C:public A
{
	public:
		C(int x):A(x)
		{
			
			cout<<"Constructor of class C is called:"<<x<<endl;
		}
		~C()
		{
			cout<<"Destructor of class C is called"<<endl;
		}
};
main()
{
	B b(5);
	C c(10);
}
