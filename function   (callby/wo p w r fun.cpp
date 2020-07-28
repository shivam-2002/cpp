#include<iostream>
using namespace std;
/*int table()
{
	int t;
	cout<<"Enter Number to print table: ";
	cin>>t;
	for(int a=1;a<=10;a++)
	cout<<t<<"*"<<a<<"="<<t*a<<endl;
	return t;
}
main()
{
	int x;
	x=table();
	cout<<x;
}*/


int table()
{
	int t;
	cout<<"Enter Number to print table: ";
	cin>>t;
	return t;
}
main()
{
	int x;
	x=table();
	for(int a=1;a<=10;a++)
	cout<<x<<"*"<<a<<"="<<x*a<<endl;
}


