#include<iostream>
using namespace std;
template<typename T,typename T1>
T sum(T a,T1 b)
{
	cout<<"Template Function: "<<a+b<<endl;
	return a+b;
}
int sum(int a,int b)
{
	cout<<"Normal function: "<<a+b<<endl;
	return a+b;
}
template<typename T>
T sum(T a)
{
	cout<<"Template Function: "<<a<<endl;
	return a;
}
template<typename T,typename P,typename R>
T sum(T a,P b,R c)
{
	cout<<"Template Function: "<<a+b+c<<endl;
	return a+b+c;
}
int main()
{
	cout<<"Sum of Two number is: "<<sum<int,int>(5,6)<<endl;//may not take <int,int>
	cout<<"Sum of Two number is: "<<sum(3.5,8.6)<<endl;
	cout<<"The number is: "<<sum('A')<<endl;
	cout<<"Sum is: "<<sum(8,9,10);
}
