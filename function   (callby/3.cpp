#include<iostream>
using namespace std;//function without parameter without return type
power()
{
	int x,y;
	cin>>x;
	for(int a=0;a<=x;a++)
	cout<<a<<"*"<<a<<"="<<a*a<<endl;
}
main()
{
	for(int p=0;p<5;p++)
	power();
}
