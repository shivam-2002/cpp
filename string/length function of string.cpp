#include<iostream>
#include<string.h>
using namespace std;
main()
{
	string s1="Morning",s2;
	cout<<s1.length()<<endl;
	cout<<s1.size()<<endl;
	s1="HELLO";
	cout<<s1.length()<<endl;
	cout<<s1.size()<<endl;
	cout<<s1.capacity()<<endl;
	s2="1234";
	cout<<s2.capacity()<<endl;
	cout<<s1.max_size()<<endl;
	
}
