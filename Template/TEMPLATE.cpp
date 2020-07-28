#include<iostream>
using namespace std;
template <typename type>
type square(type num)
{
return num * num;
}
main()
{
int num1 = 3;
cout<<"Square of "<<num1<<" is: "<<square<int>(num1)<<endl;
float num2 = 5.6;
cout<<"Square of "<<num2<<" is: "<<square<float>(num2)<<endl;
}

