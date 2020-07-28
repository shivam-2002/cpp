#include<iostream>
using namespace std;
class B;
class A
{
	int *p1,x;//DATA MEMBER
	public:
		void Adata()
		{
			cout<<"Enter X: ";
			cin>>x;
			p1=&x;
		}
		friend class B;
}a1;
class B
{
	int **p2;
	public:
		void Bdata(A a2)
		{
			p2=&a2.p1;
			cout<<"x is : "<<**p2;
		}
}b1;
main()
{
	a1.Adata();
	b1.Bdata(a1);
}
