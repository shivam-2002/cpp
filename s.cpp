#include<iostream>
using namespace std;
int main()
{
	int s=0,n=2020;
	for(int i=1;i<=2020;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	cout<<s;
}
