#include<iostream>
using namespace std;
class A
{
    static x;
    public: 
    void getx()
    {
        cout<<"Enter value of x: ";
        cin>>x;
    }
};
int A::x;
main()
{
    A a;
    a.getx();
}
