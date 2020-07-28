#include<iostream>
using namespace std;
class A
{
	int x;
	public:
		void getdata()
		{
			cout<<"Enter Value of X: ";
			cin>>x;
		}
		friend class B;
};
class B
{
	public:
	int display(A a2)
	{
		cout<<a2.x<<endl;
		if(a2.x<=0)
		{
			cout<<"X is zero or less than zero";
			return a2.x;
		}
		else
		{
			cout<<"Value of x is: "<<a2.x<<endl;
			a2.x--;
			display(a2);
		}
	}
};
main()
{
	A a1;
	B b1;
	a1.getdata();
	b1.display(a1);
}
