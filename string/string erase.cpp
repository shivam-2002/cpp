#include<iostream>
using namespace std;
int main()
{
	string s1;
	s1="qwerty";
	string s2="12345";
	string s3("abc123");
	s3.erase(1,3);//it delete 3 elements after first elemnet
	cout<<s3;
}
