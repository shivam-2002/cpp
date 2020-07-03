#include<iostream>
using namespace std;
int fact(int n)
{
	int t=1;
	while(n>0)
	{
		t=t*n;
		n--;
	}
	//cout<<t<<endl;
	return t;
}
int main()
{
	int a,b,c,a1,a2,a3,x,y,a4,a5,a6,a7;
	cin>>a>>b>>c;
	//cout<<fact(a)<<endl;
	a1=fact(a);
	a2=fact(b);
	a3=fact(a-b);
	x=a1/(a2*a3);
	a4=fact(b-1);
	a5=fact(a-b+1);
	y=a1/(a4*a5);
	cout<<x+y;
	a6=fact(c);
	a7=fact(c-1);
	cout<<a6+a7;
}
