#include<iostream>
using namespace std;
f1()
{
	int n;
	cin>>n;
	if(1<=n<=99999)
	{
		return n;
	}
	else
	f1();
}
int main()
{
	int n,a[5],b[5];
	n=f1();
	for(int i=0;i<5;i++)
	{
		a[i]=n%10;
		n=n/10;
	}
	for(int i=0;i<5;i++)
	{
		for(int j=2;j<a[i];j++)
		{
			if(a[i]/j==0)
			{
				b[i]=1;
				break;
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		if((b[i]!=1)&&(a[i]!=0))
		cout<<a[i]<<ends;
	}
}
