#include<iostream>
using namespace std;
template <class datatype>
class A
{
datatype a,b; //int a,b; FOR NORMAL CLASS
public:
A(datatype x,datatype y) //A(int x, inty) FOR NORMAL CLASS
{
a=x;
b=y;
}
datatype getmax() //int getmax() FOR NORMAL CLASS
{
return (a>b?a:b);
}
};
main()
{
A<int>object(10,20);//CALL TO PARAMETERIZED CONSTRUCTOR
cout<<"GREATER NUMBER IS: "<<object.getmax()<<endl;
A<float>object2(10.2,34.7);
cout<<"GREATER NUMBER IS: "<<object2.getmax()<<endl;
A<char>object3('A','a');
cout<<"GREATER NUMBER IS: "<<object3.getmax();
}
