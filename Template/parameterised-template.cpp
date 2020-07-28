#include<iostream>
using namespace std;
template<class T,class P=char>
class A
{
	public:
		T x;
		P y;
		
};
main()
{
	A<char>a1;
	A<int,int>a2;
	cout<<sizeof(a1)<<endl;
	cout<<sizeof(a2)<<endl;
}
