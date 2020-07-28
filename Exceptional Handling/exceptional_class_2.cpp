#include<iostream>
using namespace std;
class A
{
	protected:
	int a,b;
	public:
		void input()
		{
			cout<<"Enter Two Number: ";
			cin>>a>>b;
		}
};
class B:public A
{
	public:
	int p()
	{
		try
	{
		if(b==0)
		throw b;
		else
		{
			cout<<"Division of two number is: "<<a/b<<endl;
			cout<<"Remainder of a and b after divisionl is : "<<a%b<<endl;
		}
	}
	catch(int z)
		{
		cout<<"Divisionl cannot be done because value of b is: "<<z<<endl;
		input();
		}
	}
};
int main()
{
	B b;
	b.input();
	b.p();
}
