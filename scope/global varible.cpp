#include<iostream>
using namespace std;
int x=10;//global varible
main()
{
	int y=20;//y is local varible
	cout<<"x is: "<<x<<endl;
	cout<<"y is: "<<y<<endl;
	{
		int z=30;//z is blockvarible
		cout<<"Z is: "<<z<<endl;
	}
	cout<<"z is: "<<z<<endl;
}
