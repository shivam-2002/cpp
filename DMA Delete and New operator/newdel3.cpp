#include<iostream>
using namespace std;
class A
{
int *a;
float *b;
public:
void new1()
{
a=new int[10];
b=new float[5];
}
friend class B;
};
class B
{
public:
void new2(A a2)
{
cout<<"Enter 10 Numbers: ";
for(int i=0;i<10;i++)
{
cin>>a2.a[i];
}
cout<<"Enter 5 Float Number: ";
for(int j=0;j<5;j++)
{
cin>>a2.b[j];
}
}
};
class C:public B
{
public:
void show()
{
cout<<"Befor Deallocation: ";
for(int i=0;i<5;i++)
{
//cout<<a[i]<<ends;
}
for(int i=0;i<5;i++)
{
//cout<<b[i]<<ends;
}
}
void delfun()
{
//delete a;
//delete b;
}
void check()
{
cout<<"Afer Deallocation: ";
for(int i=0;i<5;i++)
{
//cout<<a[i]<<ends;
}
for(int i=0;i<5;i++)
{
//cout<<b[i]<<ends;
}
}
};
int main()
{
A a1;
C c;
a1.new1();
//c.new1();
c.new2(a1);
c.show();
c.delfun();
c.check();
}
