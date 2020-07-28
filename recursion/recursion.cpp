#include<iostream>
using namespace std;
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
main()
{
	int y;
	cout<<"Enter value of Y: ";
	cin>>y;
	display(y);
}
