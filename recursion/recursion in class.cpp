#include<iostream>
using namespace std;
class A
{
	public:
	int display(int x)
	{
	if(x<=0)
	{
		cout<<"X is ZERO OR LESS THAN 0"<<endl;
		return x;
	}
	else
	{
		cout<<"VALUE OF x IS: "<<x<<endl;
		display(x-1);
	}
	}
}a1;
main()
{
	int y;
	cout<<"Enter Value of Y: ";
	cin>>y;
	a1.display(y);
}
