#include<iostream>
using namespace std;
int f()
{
	int T;
	cin>>T;
	if(1<=T<=100)
	{
		return T;
	}
	else
	{
		f();
	}
}
int g()
{
	int N;
	cin>>N;
	if(2<=N<=100)
	{
		return N;
	}
	else 
	{
		g();
	}
}
int main()
{
	int T,N;
	T=f();
	N=g();
	int i,j,a[N][N],k=0;
	while(T!=0)
	{
		for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
			{
				cin>>a[i][i];
			}
		}
		T--;
	}
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			if((i==j)||(i+j)==(N+1))
			{
				for(int p=2;p<N;p++)
				{
					for(int q=2;q<p;q++)
					{
						if((p*q)==a[i][j])
						k=k+a[i][j];
					}
				}
			}
		}
	}
	cout<<k;
}
