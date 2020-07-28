#include<iostream>
using namespace std;
class A
{
	int x;
	public: 
	void getx()
	{
		cout<<"Enter X: ";
		cin>>x;
	}
	void showx()
	{
		cout<<"X is: "<<x;
	}
};
main()
{
	A a1;
	a1.getx();
	a1.showx();
}
