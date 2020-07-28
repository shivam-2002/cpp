#include<iostream>
using namespace std;
template<typename T,typename P>
T mul(T a,P b)
{
	return a*b;
}
int main()
{
	int a;
	cout<<"Enter a integer: ";
	cin>>a;
	float b;
	cout<<"Enter a float: ";
	cin>>b;
	cout<<"Multiplication of integer and float is: "<<mul<int,float>(a,b)<<endl;
}
