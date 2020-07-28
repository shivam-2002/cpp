#include<iostream>
using namespace std;
main()
{
	int n,x,fact=1;
	x=1;
	cin>>n;
	for(x=1;x<=n;x++)
	{
		fact=fact*x;
	}
	cout<<fact;
}
