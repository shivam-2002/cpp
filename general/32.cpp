#include<iostream>
using namespace std;
int main()
{
	int T,N;
	cin>>N;
	int a[N],i,p[T]={0};
	while(T!=0)
	{
		cin>>N;
		for(i=0;i<a[N];i++)
		{
			cin>>a[i];
			p[i]=p[i]+a[i];
		}
		T--;
	}
	while(T!=0)
	{
		for(i=0;i<T;i++)
		{
			cout<<p[i]<<endl;
		}
	}
}
