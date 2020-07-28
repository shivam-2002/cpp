#include<iostream>
using namespace std;
int main()
{
	string s1;//DECLARATION OF STRING
	s1="qwerty";//INITIALIZATION
	string s2="12345";//DECLARATION AND INITIALIZATION
	string s3("abc123");//DECLARATION AS WELL AS INITIALIZATION
	//s1=s1+s2;//combine the two string
	//cout<<s1;//OUTPUT OF COMBINED STRING
	//s2=s1;//assining value of s1 into s2//COPING CONTENT ONE INTO ANOTHER
	//cout<<s2;
	//s2.swap(s3);
	//cout<<s2<<ends<<s3;//ends is manipulator it leave one space between s2 and s3
	//s3.insert(2,s2);//after 2 letter of s3 insert s2 in s3
	//cout<<s3;
	s3.insert(3,"********");
	cout<<s3<<ends;
	s3.insert(5,"xyz");
	cout<<s3;
}
