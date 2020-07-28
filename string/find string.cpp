#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x=22;
	string s1("123426"),s2("9999");
	//cout<<s1.find("2")<<endl;
	//cout<<s2.find("2")<<endl;//IT GIVE GARBAGE VALUE
	//cout<<s1.find("12345")<<endl;
	cout<<s1.rfind('2')<<endl;
	cout<<s2.find_last_of('9')<<endl;//find till last 2 element
	cout<<s2.find_first_of('9')<<endl;//find first 2 element
	cout<<pow(x,2);
}
