#include<iostream>
using namespace std;
template<class T>
class A
{
	T a,b;
	public:
	A(T x,T y)
	{
		a=x;
		b=y;
	}
	T getmax();
};
template<class T>
T A<T>::getmax()
{
	T retval;
	retval=a>b?a:b;
	return retval;
}
main()
{
	A<int>a(5,9);
	cout<<a.getmax();
}
