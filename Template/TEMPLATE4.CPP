#include<iostream>
using namespace std;
template<typename T,typename P>
T mul(T a,P b=8.6)
{
	return a*b;
}
int main()
{
	int a;
	cout<<"Enter a integer: ";
	cin>>a;
	cout<<"Multiplication of integer and float is: "<<mul<int,float>(a)<<endl;
}
