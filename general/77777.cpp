#include<iostream>
using namespace std;
int main()
{
	int T,N,p=1;
	cin>>T;
	while(T--)
	{
		cin>>N;
		int W[N],H[N],i;
		for(i=0;i<N;i++)
		{
			cin>>W[i];
			cin>>H[i];
		}
		for(i=0;i<N;i++)
		{
			if((W[i]<W[i+1])&&(H[i]<H[i+1]))
			{
				p++;
			}
			else
			break;
		}
	}
	cout<<p;
}
