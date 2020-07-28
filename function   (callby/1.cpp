#include<iostream>
using namespace std;
void square(int s)
{
	for(int a=0;a<=s;a++)
	cout<<a<<"*"<<a<<"="<<a*a<<endl;
}
main()
{
	int x;
	cin>>x;
	square(x);
}
