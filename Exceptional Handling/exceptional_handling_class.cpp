#include <iostream>
using namespace std;
class division
{
public: int x, y;
void getinput()
{
cout<<"ENTER x AND y: ";
cin>>x>>y;
}
void div()
{
if(y==0)
{
throw y;
}
else
{
cout<<"DIVISION IS: "<<(x/y)<<endl;
}
}
};
int main()
{
division d;
try
{
d.getinput();//FUNCTION CALL
d.div();//FUNCTION CALL
}
catch(int z)
{
cout<<"DIV IS NOT POSSIBLE BECAUSE y IS: "<<z;
}
return 0;
}
