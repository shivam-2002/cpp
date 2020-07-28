#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	int a=11,b=12;
	cout<<setbase(8)<<a<<endl;
	cout<<setbase(16)<<a<<endl;
	cout<<setbase(10)<<b<<endl;
	cout<<setbase(2)<<b<<endl;
	cout<<setbase(16)<<10<<endl;
	cout<<setbase(2)<<a;
}
