#include<iostream>
using namespace std;
class A
{
int x;
public: void input()
{
cout<<"ENTER NUMBER: ";
cin>>x;
cout<<"ADDRESS OF x IS: "<<&x<<endl;
}
void output()
{
cout<<"THE NUMBER IS: "<<x<<endl;
}
};
main()
{
A *ptr;//*ptr IS A POINTER OBJECT
ptr=new A;//ptr=new int;FOR REFERENCE ONLY
cout<<"ADDRESS OF ptr IS: "<<&ptr<<endl;
cout<<"ADDRESS HOLD BY ptr IS: "<<ptr<<endl;
ptr->input();
ptr->output();
delete ptr;
cout<<"AFTER DELETING, WE ARE CHECKING THE NUMBER:"<<endl;
ptr->output();
}
