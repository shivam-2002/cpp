#include<iostream>
using namespace std;
class A
{
	int x;
	public:
	void getx()
	{
		cout<<"Enter Value of X: ";
		cin>>x;
	}
	friend class B;//DECLARATION OF FRIEND CLASS
}a1;
class B//DEFINATI OF FRIEND CLASS
{
	int y;
	public:
		void gety()
		{
			cout<<"Enter Value of Y: ";
			cin>>y;
		}
		void sum(A a2)
		{
			cout<<"Addition is: "<<a2.x+y;
		}
}b1;
main()
{
	a1.getx();
	b1.gety();
	b1.sum(a1);
}
