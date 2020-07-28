#include<iostream>
using namespace std;
int main()
{
	string s1;
	s1="qwert";
	string s2("12345");
	s2.replace(2,3,s1);
	cout<<s2;
}
