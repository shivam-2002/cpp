#include<iostream>
using namespace std;
main()
{
int x, y;
cout<<"ENTER x AND y: ";
cin>>x>>y;
try
{
 if((x<=0)||(y==0))
 {
 throw x, y;
 }
 else
 {
 cout<<"DIVISION IS: "<<(x/y);
 }
}
catch (int)
{
cout<<"DIV IS IMPOSSIBLE BECAUSE x IS: "<<x<<endl;
cout<<"DIV IS IMPOSSIBLE BECAUSE y IS: "<<y<<endl;
}
}

