#include<iostream>
using namespace std;
int check()
{
	int n;
	cin>>n;
	if(0<n<=100000)
	{
		return n;
	}
	else
	check();
}
main()
{
	int n;
	n=check();
	int a[n],t=0,x,y;
	for(int x=0;x<n;x++)
	{
		cin>>a[n];
	}
	for(x=0;x<n;x++)
	{
		for(y=1;y<=a[x];y++)
		{
			if(a[x]%y==0)
			{
				t++;
			}
		}
		if(t==3)
		{
		cout<<"YES"<<endl;
		}
		else
		{
		cout<<"NO"<<endl;
		}
		t=0;
	}
}
