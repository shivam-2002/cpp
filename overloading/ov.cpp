//MEMBER FUNCTION DECLARED INSIDE THE CLADD
//MEMBER FUNCTION DECLARED INSIDE AND OUTSIDE THE CLASS
#include<iostream>
using namespace std;
class A
{
	public: int x;//DATA MEMBER
	
	float y;//DATA MEMBER
	void getdata()//declared and defined
	{
		cout<<"ENTER x and y: ";
		cin>>x>>y;
	}
	void showdata();//only declared	
}a1,a2;//a1,a2 ARE OBJECTS
void A::showdata()//DEFINE OUTSIDE CLASS IT HAVE RETURN TYPE(VOID) NAME OF CLASS WITH SCOPE OPERATOR THEN NAME OF FUNCTION
{
	cout<<"SUM IS: "<<x+y;
}



 main()
{
	A a3,a4,a5;//creating objects
   	a1.getdata();
   	a2=a1;
	a2.showdata();
}



