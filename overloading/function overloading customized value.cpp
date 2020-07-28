#include<iostream>
using namespace std;
class A
{
	public:
	void sum(int x,int y)
	{
		cout<<x+y<<endl;
	}
	void sum(double z,double a=8.5)
	{
		cout<<z+a;
	}
}a1;
main()
{
	a1.sum(2,3);
	a1.sum(3.5,5.8);
}
