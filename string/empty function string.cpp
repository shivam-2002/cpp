#include<iostream>
using namespace std;
int main()
{
	string s1("123456"),s2("9999");
	cout<<(s1.empty()?"YES":"NO")<<endl;
	s1.empty();
	cout<<(s1.empty()?"YES":"NO")<<endl;
	s1.clear();
	cout<<(s1.empty()?"YES":"NO")<<endl;
	if(s2.empty())
	cout<<"YES";
	else
	cout<<"NO";
}
