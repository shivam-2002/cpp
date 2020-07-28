#include<iostream>
using namespace std;
template<typename T,typename P>
T area(T r2,P pi=3.14)
{
	return r2*r2*pi;
}
main()
{
	int r;
	cout<<"Enter integer value of radius: ";
	cin>>r;
	cout<<"Area of circle is: "<<area<int,float>(r)<<endl;
	float r1;
	cout<<"Enter float value of radius: ";
	cin>>r1;
	cout<<"Area of circle is: "<<area<float,float>(r1)<<endl;
}
