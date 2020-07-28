//DEFAULT PAPMETERS OR ARGUMENTS IN CLASS TEMPLATES:

#include<iostream>
using namespace std;
template<class datatype, class datatype2>
class A
{
public:
datatype x;
datatype2 y;
datatype info(datatype x, datatype2 y='a')
{
cout<<"ENTER x: ";
cin>>x;
cout<<"THE x AND y ARE: ";
cout<<x<<ends<<y;
}
};
main()
{
A<char,char> a1;
A<int, int> a2;
cout<<sizeof(a1)<<endl; //IN a1 OBJECT THERE ARE BOTH DATA MEMBERS OF char TYPE SO SIZE IS 2 bytes AS SECOND PARAMETER FROM RIGHT IS DEFAULT
cout<<sizeof(a2)<<endl; //IN a2 OBJECT THERE ARE BOTH THE DATA MEMBERS OF int TYPE SO SIZE IS 8 bytes
a1.info('b');
}
