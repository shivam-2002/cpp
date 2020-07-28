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
	int display()
	{
		if(x<=0)
		{
			cout<<"X is zero or greater thand 0"<<endl;
			return x;
		}
		else
		{
			cout<<"Value of X is: "<<x<<endl;
			x--;
			display();
		}
	}
};
main()
{
	A a1;
	a1.getdata();
	a1.display();
}
