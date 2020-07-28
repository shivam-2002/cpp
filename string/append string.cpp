#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s1("good"),s2("afternoon");
	s2.append(s1);
	cout<<s2<<endl;
	s2.append(s1,2,3);
	cout<<s2;
}
