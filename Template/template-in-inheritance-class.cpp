//CLASS TEMPLATE IN SINGLE INHERITANCE:

#include<iostream>
using namespace std;
template<class datatype>
class A
{
protected:
datatype x;
public:
void basefunction()
{
cout<<"x is of BASE CLASS"<<endl;
}
};
template <class datatype,class datatype2>
class B:public A <datatype> //B IS DERIVED CLASS
{
private:
datatype2 y;
public:
void getdata()
{
cin>>A<datatype>::x>>y;
}
void display()
{
cout<<"x: "<<A<datatype>::x<<endl;
cout<<"y: "<<y<<endl;
A<datatype>::basefunction(); //FUNCTION CALL TO BASE CLASS basefunction
}
};
main()
{
B<int,float> b1; //b1 IS OBJECT
cout<<"ENTER x(int) AND y(float): "<<endl;
b1.getdata();
b1.display();
B<float,int> b2; //b2 IS OBJECT
cout<<"ENTER x(float) AND y(int): "<<endl;
b2.getdata();
b2.display();
}
