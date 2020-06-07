#include<iostream>
using namespace std;
int main()
{
	int n,p=0;
	cout<<"Enter Number: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			p++;
		}
	}
	if(p==2)
	{
		cout<<n<<" is a prime number";
	}
	else
	{
		cout<<n<<" is a composite number";
	}
}
