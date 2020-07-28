#include<iostream>
using namespace std;
class A
{
	private:
		int x;
	public:
		A()
		{
			cout<<"Enter Value of x: ";
			cin>>x;
		}
		~A()
		{
			cout<<"Destructor of Class A is called: "<<endl;
		}
};
class B:public A
{
	private:
		int y;
	public:
		B()
		{
			cout<<"Enter Value of Y: ";
			cin>>y;
		}
		~B()
		{
			cout<<"Destructor of A is called"<<endl;
		}
};
class C:public A
{
	public:
		C()
		{
			cout<<"This is Hiererchial Inheritance: "<<endl;
			
		}
		~C()
		{
			cout<<"Destructor of Class C is called: "<<endl;
		}
};
int main()
{
	C c;
	B b;
}
