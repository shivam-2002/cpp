#include<iostream>
using namespace std;
class B;
class A
{
	void *p1;
	int *p2,*p3,x;
	public:
		void voidpointer()
		{
			cout<<"Enter value of x: ";
			cin>>x;
			p1=&x;
			cout<<"X is: "<<*(int *)p1<<endl;
		}
		void wildpointer()
		{
			cout<<"WILD POINTER HOLDS RANDOM ADDRESS: "<<p2<<endl;
		}
		void nullpointer()
		{
			p3=NULL;
			cout<<"NULL POINTER HOLDS: "<<p3;
		}
};
main()
{
	A a;
	a.voidpointer();
	a.wildpointer();
	a.nullpointer();
}
