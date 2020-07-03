#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n;
	cout<<"Prime Factor of "<<n<<" is: "<<endl;
	cout<<1<<ends;
	while(n!=0)
	{
		for(int i=2;i<=n;i++)
		{
			if(n%i==0)
			{
				cout<<i<<ends;
				n=n/i;
				break;
			}
		}
		if(n==1)
		break;
	}
}
