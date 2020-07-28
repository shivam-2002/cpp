#include<iostream>
using namespace std;
class A
{
	int x;
	public: 
	void getdata()
	{
		cout<<"Enter value of x: ";
		cin>>x;
	}
	int display(A a2)
	{
		if(a2.x<=0)
		{
			cout<<"X is zero or greater thand 0"<<endl;
			return a2.x;
		}
		else
		{
			cout<<"Value of X is: "<<a2.x<<endl;
			a2.x--;
			display(a2);
		}
	}
};
main()
{
	A a1;
	a1.getdata();
	a1.display(a1);
}
