#include<iostream>
using namespace std;
main()
{
int x;
float y;
cout<<"ENTER x AND y: ";
cin>>x>>y;
try
{
 if(x<=0)
 {
 throw x;
 }
 else if(y==0.0)
 {
 throw y;
}
}
catch (int)
{
cout<<"THE x IS LESS THAN OR EQUAL TO ZERO: "<<x<<endl;
}
catch (float)
{
cout<<"DIV IS IMPOSSIBLE BECAUSE y IS: "<<y<<endl;
}
}

