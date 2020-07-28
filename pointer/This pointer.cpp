#include<iostream>
using namespace std;
class student
{
	public:
		void showaddress()
		{
			cout<<endl<<"my object's address is: ";
			cout<<this;
			cout<<endl;
		}
};
main()
{
	student s1,s2,s3;
	s1.showaddress();
	s2.showaddress();
	s3.showaddress();
	
}
