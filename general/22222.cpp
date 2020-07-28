#include<iostream>
using namespace std;
int f()
{
	int T;
	cin>>T;
	if(1<=T<=10)
	return T;
	else
	f();
}
int g()
{
	int N;
	cin>>N;
	if(1<=N<=10000)
	return N;
	else
	g();
}
int h()
{
	int W;
	cin>>W;
	if(1<=W<=100)
	return W;
	else
	h();
}
int i()
{
	int H;
	cin>>H;
	if(1<=H<=100)
	return H;
	else
	i();
}
int main()
{
	int p,q,r,s;
	p=f();
	q=g();
	r=h();
	s=i();
	
	
}
