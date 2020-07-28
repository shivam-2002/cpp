#include<iostream>
using namespace std;
class A
{
    static int x;
    public: 
    void getx()
    {
        cout<<"Enter value of x: ";
        cin>>x;
        cout<<x*x;
    }
};
int A::x;
main()
{
    A a;
    a.getx();
}