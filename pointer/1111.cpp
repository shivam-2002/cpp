#include<iostream>
using namespace std;
class A
{
	public:int x;
	public:
		void getx()
		{
			cout<<"Enter Value of x: ";
			cin>>x;
		}
		void showx()
		{
			cout<<"X is : "<<x<<endl;
		}
};
main()
{
	A a1,*a2;
	a2=&a1;
	a2->getx();
	a2->showx();
	cout<<a2->x;
}
