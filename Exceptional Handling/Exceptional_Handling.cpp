#include <iostream>
using namespace std;
main()
{
int x;
A:
cout<<"ENTER x: ";
cin>>x;
try {
cout<<"NOW WE ARE IN try BLOCK WHERE x HAS BEEN CHECKED WHETHER IT IS GREATER THAN 0 OR NOT"<<endl<<endl;
if (x < 0)
{
cout<<"IF x IS LESS THAN 0 THAN THROW IT TO CATCH BLOCK BY throw KEYWORD"<<endl<<endl;
throw x;
}
cout<<"x IS GREATER THAN 0, SO NO NEED TO THROW IT";
}
catch (int x )
{
cout<<"NOW CATCH CAN HANDLE THE EXCEPTION THROWN BY throw KEYWORD AND DO THE NECESSARY ACTION AS PER USER"<<endl<<endl;
cout<<"RE";
goto A;
}
}
