#include<iostream>
using namespace std;
void table()//function without parameter without return type
{
	int t;
	cout<<"Enter Number To Write Table: ";
	cin>>t;
	for(int a=1;a<=10;a++)
	cout<<t<<"*"<<a<<"="<<t*a<<endl;
}
/*void count()
{
	int p;
	cout<<"Enter Number to write Counting: ";
	cin>>p;
	for(int k=1;k<=p;k++)
	cout<<k<<endl;
	
	
}
main()
{
	table();//function call
	count();
}*/
