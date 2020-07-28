#include<iostream>
using namespace std;
class A
{
int *p;
public: void input()
{
p=new int[10];
cout<<"ADDRESS OF p IS: "<<&p<<endl;
cout<<"ADDRESS HOLD BY p IS: "<<p<<endl;
cout<<"ENTER NUMBERS: ";
cin>>p[0]>>p[1];
}
void output()
{
cout<<"THE NUMBERS ARE: ";
cout<<p[0]<<ends<<p[1]<<endl;
}
void freestorage()
{
delete p;
cout<<"AFTER DELETING THE NUMBERS ARE: ";
cout<<p[0]<<ends<<p[1]<<endl;
}
};
main()
{
A a;
a.input();
a.output();
a.freestorage();
}
