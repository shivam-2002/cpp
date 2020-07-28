#include<iostream>
using namespace std;
class A
{
	protected:
	int *a;
	string *b;
	public:
		void new1()
		{
			a=new int[5];
			cout<<"Enter Roll Number of Five Students: ";
			for(int i=0;i<5;i++)
			{
				cin>>a[i];
			}
		}
	
};
class B:public A
{
	public:
		void new2()
		{
			b=new string[5];
			cout<<"Enter Name of Five Students: ";
			for(int i=0;i<5;i++)
			cin>>b[i];
		}
};
class C:public B
{
	public:
	void delfun()
	{
		delete a;
		delete b;
	}
};
class D:public C
{
	public:
	void check()
	{
		cout<<"Check Output: "<<endl;
		for(int i=0;i<5;i++)
		{
			cout<<a[i]<<ends<<b[i]<<endl;
		}
	}
};
int main()
{
	D d;
	d.new1();
	d.new2();
	d.delfun();
	d.check();
}
