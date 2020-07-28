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
	A(A &a5)
	{
		cout<<"COPY CONSTRUCTOR CALLED"<<endl;
		
		cout<<"ADDRESS OF a5 IS: "<<&a5<<endl;
	}
	~A()
	{
		cout<<"DESTRUCTUR IS CALLED"<<endl;
		
	}
}a4;
main()
{
	cout<<"Main Function"<<endl;
	A a1,a2(5),a3,a4(11),a6(a3);
		cout<<"ADDRESS OF a4 IS: "<<&a4<<endl;
		cout<<"ADDRESS OF a3 IS: "<<&a3<<endl;
		cout<<"ADDRESS OF a2 IS: "<<&a2<<endl;
		cout<<"ADDRESS OF a1 IS: "<<&a1<<endl;
}
