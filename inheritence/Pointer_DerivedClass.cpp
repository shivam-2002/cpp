#include<iostream>
using namespace std;
class A
{
public: void print()
{
cout<<"PRINT BASE CLASS - A"<<endl;
}
};
class B:public A
{
public: void print()
{
cout<<"PRINT DERIVED CLASS - B"<<endl;
}
};
main()
{
A a, *aptr;
B b, *bptr;
aptr=&a;
aptr->print();
aptr=&b;
aptr->print();
bptr=&b;
bptr->print();
}
