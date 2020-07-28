#include<iostream>
using namespace std;
class A
{
	protected:
	int x;
	public:
		void f1()
		{
			cout<<"Enter Value of x: ";
			cin>>x;
		}
};
class B:public A
{
	int y;
	public:
		void f2()
		{
			cout<<"Enter Value of y: ";
			cin>>y;
		}
		void output()
		{
			cout<<"The Sum of Two Number Is: "<<x+y<<endl;
		}
};
int main()
{
	B *b;
	b=new B[2];
	for(int i=0;i<2;i++)
	{
		b->f1();
		b->f2();
		b->output();
	}
	delete b;
	for(int i=0;i<2;i++)
	{
		b->f1();
		b->f2();
		b->output();
	}
}
