#include<iostream>
using namespace std;
template<class T,class P>
class A
{
	T a;
	P b;
	public:
		A(T x,P y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<a<<" "<<b<<endl;
		}
};
int main()
{
	A<int,float>a1(25,63.5);
	A<int,char>a2(56,'z');
	a1.show();
	a2.show();
}
