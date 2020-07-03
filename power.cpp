#include<iostream>
using namespace std;
int main()
{
	int x,n,result=1;
	cin>>x>>n;
	result=x;
	while(n>1)
	{
		if(n%2==0)
		{
			x=x*x;
			n=n/2;
		}
		else
		{
			x=result*x;
			n=n-1;
		}
	}
	cout<<x;
}
