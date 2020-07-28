#include<iostream>
using namespace std;
class A
{
	protected: int x;
	public:
		void input()
		{
			cout<<"Enter x: ";
			cin>>x;
		}
};
class B:public A
{
	protected: int y;
	public: 
	void input()
	{
		cout<<"Enter y: ";
		cin>>y;
	}
};
class C:public B
{
	public:
		void output()
		{
			cout<<(x*y);
		}
};
main()
{
	C c1;
	c1.A::input();
	c1.B::input();
	c1.output();
}
