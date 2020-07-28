#include<iostream>
using namespace std;
f()
{
	int D;
	cin>>D;
	if(1<=D<=30)
	{
		return D;
	}
	else
	f();
}
main()
{
	int y;
	y=f();
	if(y==24)
	{
		cout<<"Math";
	}
	else if(y==25)
	{
		cout<<"C++";
	}
	else if(y==26)
	{
		cout<<"COD";
	}
	else if(y==29)
	{
		cout<<"DBMS";
	}
	else
	cout<<"Holiday";
	
}
