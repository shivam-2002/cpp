#include<iostream>
using namespace std;
int f1()
{
	int n;
	cin>>n;
	if(1<=n<=10)
	{
		return n;
	}
	else
	{
		f1();
	}
}
int main()
{
	int n;
	n=f1();
	int a[n],b;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		b=0;
		for(int j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				b++;
			}
		}
		if(b==2)
		{
			cout<<a[i]<<" ";
		}
	}
}
