#include<iostream>
using namespace std;
main()
{
	long long int a[100000],x,k;
	for(x=0;x<100000;x++)
	{
		cin>>a[x];
		if(a[x]==-1)
		{
			break;
		}
	}
	cout<<endl;
	cin>>k;
	cout<<a[x-k-1];
}
