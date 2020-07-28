#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	int a=200,b=300;
	cout<<setfill('*');
	cout<<setw(5)<<a<<setw(5)<<b<<endl;
	cout<<setw(6)<<a<<setw(6)<<b<<endl;
}
