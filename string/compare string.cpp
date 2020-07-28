#include<iostream>
using namespace std;
int main()
{
	string s1;
	s1="qwert";
	string s2("12345678"),s3("pp3pp"),s4("ttttttt");
	cout<<s3.compare(s2)<<ends;//it retrurns difference of ascii value
	cout<<s3.compare(2,1,s2)<<ends;//compare 3rd elements of s3 with whole element of s2
	cout<<s3.compare(2,1,s2,2,1);//compare 1 element after 2nd element of s3 with 1 element after second element
}
