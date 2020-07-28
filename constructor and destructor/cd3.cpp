#include<iostream>
using namespace std;
class A
{
	protected:
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
	protected: int y;
	public:
		B()
		{
			cout<<"Enter Value of Y: ";
			cin>>y;
		}
		~B()
		{
			cout<<"Destructor of Class B is Called:"<<endl;
		}
};
class C:public B
{
	public:
		C()
		{
			cout<<"Value of X and Y are: "<<x<<ends<<y<<endl;
		}
		~C()
		{
			cout<<"Destructor of Class C is Called: "<<endl;
		}
};
int main()
{
	C c;
	
}
