#include<iostream>
using namespace std;
class B
{
	protected:
		int x;
	public:
		void getdata1()
		{
			cout<<"Enter Value of x:";
			cin>>x;
		}
};
class D1:virtual public B
{
	protected:
		int y;
	public:
		void getdata2()
		{
			cout<<"Enter Value of y:";
			cin>>y;
		}
};
class D2:virtual public B
{
	protected:
		int z;
	public:
		void getdata3()
		{
			cout<<"Enter Value of z:";
			cin>>z;
		}
};
class C:public D1,public D2
{
	protected:int sum;
	public:
		void add()
		{
			sum=x+y+z;	
		}
		void show()
		{
			cout<<"Sum is: "<<sum<<endl;
		}
};
int main()
{
	C c;
	c.getdata1();
	c.getdata2();
	c.getdata3();
	c.add();
	c.show();
}
