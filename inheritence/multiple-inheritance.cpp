#include<iostream>
using namespace std;
class B1
{
	protected:
		int x;
	public:
		void input1()
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
		void input2()
		{
			cout<<"Enter y:";
			cin>>y;
		}
};
class D:public B1,public B2
{
	public:
		void output()
		{
			cout<<"Multiplication is:"<<(x*y);
		}
};
main()
{
	D d1;
	d1.input1();
	d1.input2();
	d1.output();
}
