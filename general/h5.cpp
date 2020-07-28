#include<iostream>
using namespace std;
int f1()
{
	int n;
	cin>>n;
	if(1<=n<=10)
		return n;
	else
	f1();
}
int main()
{
	int n,a[n],i=0;
	n=f1();
	while(i<n)
	{
		cin>>a[i];
		if(1<=a[i]<=100)
		{
			i++;
		}
	}
}
