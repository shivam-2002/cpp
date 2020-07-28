#include<iostream>
using namespace std;
class A
{
	int x;
	public:
		void in()
		{
			cout<<"ENTER X: ";
			cin>>x;
		}
		void out()
		{
			cout<<"VALUE OF x is: "<<x<<endl;
			x++;
		}
}a1;//a1 is the object
main()
{
	A a2,a3,a4,a5,a6;//objects of class A
	a1.in();//FUNCTION CALL
	a1.out();//FUNCTION CALL
	a2.out();
	a3.out();//FUNCTION CALL
}
