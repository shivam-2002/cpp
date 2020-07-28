#include <iostream>
using namespace std;
class base {
public:
void print() // virtual function
{
cout << "print base class" << endl;
}
void show() // Non Virtual Function
{
cout << "show base class" << endl; 
}
};
class derived : public base {
public:
void print() // redefinition of virtual function
{
cout << "print derived class" << endl;
}
void show()
{
cout << "show derived class" << endl;
}
};
int main()
{
//base* bptr;
derived d;
//bptr = &d;
//bptr->print();// it will call print function of derived lass
//bptr->show(); // it will call show function of base class
d.print();
d.show();
}
