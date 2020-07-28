#include<iostream>
using namespace std;
int getn()
{
	int n;
	cin>>n;
	if(1<=n<=100000)
	{
		return n;
	}
	else
	{
		getn();
	}
}
main()
{
	int n;
	n=getn();
	int a[n],x,y,t,p=1,k,q;
	for(x=0;x<n;x++)
	{
		cin>>a[x];
		if(a[x]==0)
		{
			k=x;
		}
	}
	x=0;
	while(a[x]!=0)
	{
		p=p*a[x];
		x++;
	}
	q=a[0];
	for(x=0;x<k;x++)
	{
		if(q>a[x])
		{
			q=a[x];
		}
	}
	if(p>0)
	{
		cout<<p;
	}
	else
	{
		cout<<p/q;
	}
}
