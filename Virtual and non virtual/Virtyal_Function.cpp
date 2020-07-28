#include<iostream>
using namespace std;
class A
{
	public:
		virtual void a()
		{
			cout<<"This is Virtual Function in Base Class"<<endl;
		}
		void b()
		{
			cout<<"This is Non Virtual Function in Base Class"<<endl;
		}
};
class B:public A
{
	public:
		void a()
		{
			cout<<"Redifining Virtual Function in Derived Class"<<endl;
		}
		void b()
		{
			cout<<"This is Non Virual Function in Derived Class"<<endl;
		}
};
int main()
{
	A *p;
	B b;
	p=&b;
	p->a();
	p->b();
}
