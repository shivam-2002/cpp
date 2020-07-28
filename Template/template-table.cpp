#include<iostream>
using namespace std;
template<class T=int>
class A
{
	protected:
	T x;
	public:
		void input(T a)
		{
			x=a;
		}
		
};
template<class T,class P=int>
class B:public A<T>
{
	P i=1;
	public:
	void table()
	{
		//cout<<"Table of "<<A<int>x<<": "<<endl;
		for(i=1;i<=10;i++)
		{
			cout<<A<int>::x<<"*"<<i<<"="<<A<int>::x*i<<endl;
		}
		//A<T>::input();
	}
};
int main()
{
	int k;
	cout<<"Enter Number to write Table: ";
	cin>>k;
	B<int>b1;
	b1.input(k);
	b1.table();
}
