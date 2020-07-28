#include<iostream>
using namespace std;
class B;
class A
{
	int x;
	public: 
	void getx()
	{
		cout<<"Enter value of X: ";
		cin>>x;
	}
	friend void sum(A a2,B b2);
}a1;
class B
{
	int y;
	public: 
	void gety()
	{
		cout<<"Enter Value of y: ";
		cin>>y;
	}
	friend void sum(A a2,B b2);
}b1;
void sum(A a2 n,B b2)
{
	cout<<"Sum is: "<<a1.x+b1.y;
}
main()
{
	a1.getx();
	b1.gety();
	sum(a1,b1);
}
