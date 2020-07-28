#include<iostream>
using namespace std;
int main()
{
	string s1;
	s1="qwert";
	string s2("12345678"),s3("pppppp"),s4("ttttttt");
	s2.replace(2,3,s1);//from second element of s2 3 element of s2 is replace by s1
	cout<<s2<<endl;
	s4.replace(2,3,s3,2,5);//after second element 3 element of s4 is replaced by after second element 5 elementf of s4;
	cout<<s4<<ends;
	cout<<s3.compare(s2);//it retrurns difference of ascii value
	
	
}
