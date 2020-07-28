#include<iostream>
using namespace std;
template<class T>
class A
{
	T calarea;
	public:
	A(T r)
	{
		calarea=3.14*r*r;
	}
	T show()
	{
		return calarea;
	}
};
main()
{
	int k;
	float b;
	cout<<"Enter integer value of radius: ";
	cin>>k;
	A<int>a1(k);
	cout<<"Area of circle is: "<<a1.show()<<endl;
	cout<<"Enter float value of radius: ";
	cin>>b;
	A<float>a2(b);
	cout<<"Area of circle is: "<<a2.show()<<endl;
}
