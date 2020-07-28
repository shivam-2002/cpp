#include<iostream>
using namespace std;
template<typename T>
T mul(T num1,T num2)
{
	return num1*num2;
}
int main()
{
	int a=5,b=6;
	cout<<"Multiplication of "<<a<<"and"<<b<<"is: "<<mul<int>(a,b)<<endl;
	float x=2.6,y=9.0;
	cout<<"Multiplication of "<<x<<"and "<<y<<" is: "<<mul<float>(x,y)<<endl;
}
