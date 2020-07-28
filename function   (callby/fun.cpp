#include<iostream>
using namespace std;
/*void table(int t)
{
	for(int a=1;a<=10;a++)
	cout<<t<<"*"<<a<<"="<<t*a<<endl;//endl shift control to the next line
}
main()
{
	int n;
	cout<<"Enter Number to Print Table: ";
	cin>>n;
	table(n);
}*/
void table(int t)
{
	for(int a=1;a<=10;a++)
	cout<<t<<"*"<<a<<"="<<t*a<<endl;
	
}
main()
{
	int n;
	cout<<"Enter number to write table: ";
	cin>>n;
	table(n);
}
