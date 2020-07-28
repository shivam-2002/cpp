#include<iostream>
using namespace std;
class A
{
	int x;
	public:
		void f()
		{
			cout<<"Class is Called"<<endl;
		}
};
int main()
{
	A *a;
	a=new A[10];
	for(int i=0;i<10;i++)
	{
		a->f();
	}

}
