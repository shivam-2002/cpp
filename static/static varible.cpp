#include<iostream>
using namespace std;
class A
{
	static int x;
	public:
		void in()
		{
			/*cout<<"ENTER X: ";
			cin>>x;
			x++;*/
		}
		void out()
		{
			cout<<"VALUE OF x is: "<<x<<endl;
		}
}a1;//a1 is the object
int A::x=111;
main()
{
	A a2,a3,a4,a5,a6;//objects of class A
	a1.in();//FUNCTION CALL
	a1.out();//FUNCTION CALL
	a2.out();
	a3.out();//FUNCTION CALL
	a4.in();
	a1.out();
	a2.out();
	a3.out();
}
