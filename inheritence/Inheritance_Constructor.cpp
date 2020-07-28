#include<iostream>
using namespace std;
class A
{
	protected:int x;
	public:
		A()
		{
			cout<<"Enter value of x: ";
			cin>>x;
		}
		~A()
		{
			cout<<"Value Entered by You of X is "<<x<<endl;
		}
};
class B:public A
{
	protected:
		int y;
	public:
		B()
		{
			cout<<"Enter VAlue of Y: ";
			cin>>y;
		}
		~B()
		{
			cout<<"Value of x and y are :"<<x<<ends<<y<<endl;
		}
};
int main()
{
	B b;
}
