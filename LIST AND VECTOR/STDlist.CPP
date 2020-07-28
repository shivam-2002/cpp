#include<iostream>
#include<list>
using namespace std;
void display(list<int> a) //display IS FUNCTION
{
list<int>::iterator p; //p works with list which hold address of elements, p is a pointer
for(p=a.begin();p!=a.end();p++)//firstofall p holds address of first element means initialization
cout<<endl<<*p<<endl;
}
main()
{
int b;
list<int> x; //x is name of list
list<int> y(5); //y is name of list of size 5
for(int i=0;i<3;i++)
{
cout<<"ENTER ELEMENT OF LIST x: ";
cin>>b;
x.push_back(b); //Add element at the end
}
cout<<"DISPLAYING LIST x: ";
display(x); //FUNCTION CALL
list<int>::iterator p;
for(p=y.begin();p!=y.end();p++)
{
cout<<"ENTER ELEMENT OF LIST y: ";
cin>>*p;
}
cout<<"DISPLAYING LIST y: ";
display(y); //FUNCTION CALL
}
