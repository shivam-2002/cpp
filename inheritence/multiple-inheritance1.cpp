#include<iostream>
using namespace std;
class B1
{
	protected:
		int x;
	public:
		void input()//function overriding
		{
			cout<<"Enter x: ";
			cin>>x;
		}
};
class B2
{
	protected:
		int y;
	public:
		void input()//function overriding-=
		{
			cout<<"Enter y:";
			cin>>y;
		}
};
class D:public B1,public B2
{
	public:
		void input()
		{
			cout<<"Multiplication is:"<<(x*y);
		}
};
main()
{
	D d1;
	d1.B1::input();
	d1.B2::input();
	d1.input();
}
