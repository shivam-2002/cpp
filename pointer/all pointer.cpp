#include<iostream>
using namespace std;
class A
{
	void *p1;
	int *p2,*p3=NULL,**p4,x=11;
	public: 
	void voidpointer()
	{
		cout<<"Enter X: ";
		cin>>x;
		p1=&x;
		cout<<"VOID PINTER: "<<*(int *)p1<<endl;
	}
	void wildpointer()
	{
		cout<<"WILD POINTER"<<p2<<endl;
	}
	void nullpointer()
	{
		cout<<"NULL POINTER: "<<p3<<endl;
	}
	void doublepointer()
	{
		cout<<"ENTER x: ";
		cin>>x;
		p2=&x;
		p4=&p2;
		cout<<"DOUBLE POINTER: "<<*p4;
	}
};
main()
{
	A a1;
	a1.doublepointer();
	a1.nullpointer();
	a1.voidpointer();
	a1.wildpointer();
}
