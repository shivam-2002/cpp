#include<iostream>
using namespace std;
int f1(int a,int b)
{
	if(a%b!=0)
	{
		if(a>b)
		{
			a=a%b;
			f1(a,b);
		}
		else
		{
			b=b%a;
			f1(a,b);
		}
	}
	else
	{
		return b;
	}
}
int main()
{
	int a,b,t;
	cin>>a>>b;
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	cout<<f1(a,b);
}
