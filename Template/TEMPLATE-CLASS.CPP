#include<iostream>
using namespace std;
template<class datatype1, class datatype2>
class A
{
datatype1 a;
datatype2 b;
public:
A(datatype1 x, datatype2 y)
{ a=x;
b=y;
}
void show()
{
cout<<a<<" AND "<<b<<endl;
}
};
main()
{
A <float,int> object1(1.23,12);
A <int ,char> object2(20, 'z');
object1.show();
object2.show();
}
