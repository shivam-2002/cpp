#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	int value;
	cout<<"Enter number: "<<endl;
	cin>>value;
	cout<<"decimal base:"<<setbase(10)<<value<<endl;
	cout<<"hexadecimal base: "<<setbase(16)<<value<<endl;
	cout<<"octal base: "<<setbase(8)<<value<<endl;
}
