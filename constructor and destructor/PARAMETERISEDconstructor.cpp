#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"Default Constructor is called"<<endl;
		}
	A(int x)//PARAMETERISED  CONSTRUCTOR MEMBER FUNCTION
	{
		cout<<"PARAMETERISED CONSTRUCTOR IS CALLED"<<endl;
		cout<<x<<endl;
	}	
	A(double y)
	{
		cout<<"PARAMETERISED CONSTRUCTOR IS CALLED"<<endl;
		cout<<y;
	}
}a4;
main()
{
	cout<<"Main Function"<<endl;
	A a2(5),a(11);
}
