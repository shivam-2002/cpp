#include<iostream>
using namespace std;
class A
{
	public:
		int rollno;
		string name;
		A()//DEFAULT CONSTRUCTOR
		A(int roll)//PARAMETERISED CONSTRUCTOR
		{
			rollno=roll;
		}
		A(A &a4,A &a5)//COPY CONSTRUCTOR
		{
			cout<<"Your name is: "<<a4.name;
			cout<<"Your roll number is: "<<a4.rollno;
		}
		~A()
		{
			cout<<"DESTROY THE OBJECT"<<endl;
		}
		
};
main()
{
	A a1;
	int x;
	cout<<"ENTER YOUR  ROLL NO. : ";
	cin>>x;
	A a2(x),a3(a1,a2);
}
