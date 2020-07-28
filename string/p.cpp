#include<iostream>
#include<string.h>
using namespace std;
class string_function
{
	string s1,s2,s3,s4;
	public:
		void edit()
		{
			cout<<"Enter a string s1 and s2: "<<endl;
			cin>>s1>>s2;
			s3=s1+s2;
			cout<<"+ function in string s1 and s2 is: "<<s3<<endl;
			s1.swap(s2);
			cout<<"swap function on s1 and s2 is: "<<s1<<ends<<s2<<endl;
			s1.insert(0,s2);
			cout<<"Insert function on s1 and s2 is: "<<s1<<endl;
			cout<<"Erease function on s1 and s2 is: "<<s1.erase()<<endl;
			cout<<"replace function on s1 and s2 is: "<<s1.replace(2,3,s2)<<endl;
			cout<<"Compare function in s1 and s2 is: "<<s1.compare(s2)<<endl;
			cout<<"Empty function in s1: "<<s1.empty()<<endl;
			s1.append(s2,2,3);
			cout<<"Append function on s1 and s2: "<<s1<<endl;
		}
		void finding()
		{
			cout<<s1.find(s3)<<endl;
			cout<<s1.find_first_of(s3)<<endl;
			cout<<s1.find_last_of(s3)<<endl;
		}
		void sizes()
		{
			cout<<"Subtring on s1: "<<s1.substr(1,3);
			cout<<"Length of S2: "<<s2.length();
			cout<<"Size of s3: "<<s3.size();
			cout<<"Capacity of S3: "<<s3.capacity();
			cout<<"Max_size of s3: "<<s3.max_size();
		}
}a;
main()
{
	a.edit();
	a.finding();
	a.sizes();
}
