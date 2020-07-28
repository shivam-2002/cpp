#include<iostream>
using namespace std;
class A
{
	public:
		void a()
		{
			cout<<"Hello "<<endl;
		}
};
class B:virtual public A
{
	public:
		void a()
		{
			cout<<"World"<<endl;
		}
};
int main()
{
	B b;
}
