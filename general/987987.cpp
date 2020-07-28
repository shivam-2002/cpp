#include<iostream>
using namespace std;
int main()
{
	int n,a[5],i,j,b[5]={0,0,0,0,0},t=0;
	cin>>n;
	for(i=0;i<5;i++)
	{
		a[4-i]=n%10;
		n=n/10;
	}
	for(i=0;i<5;i++)
	{
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				++b[i];
			}
		}
	}
	for(i=0;i<5;i++)
	{
		if(b[i]==2)
		{
			cout<<a[i]<<" ";
		}
	}
	for(i=0;i<5;i++)
	{
		if(b[i]!=2)
		{
			t++;
		}
	}
	if(t==5)
	{
		cout<<-1;
	}
	
}
