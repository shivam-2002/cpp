#include<iostream>
using namespace std;
int main()
{
	int a,b=0,i,j;
	cin>>a;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			b++;
		}
	}
	if(b==2)
	{
		cout<<"a is a prime number";
	}
	else
	cout<<"a is a composite number";
}
