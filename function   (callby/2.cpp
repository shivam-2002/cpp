#include<iostream>
using namespace std;
int power(int p)
{
	for(int a=1;a<p;a++)
	cout<<a<<"*"<<a<<"="<<a*a<<endl;
	p++;
	return p;
	
}
main()
{
	int y,x;
	cin>>x;
	y=power(x);
	cout<<y;
	
}
