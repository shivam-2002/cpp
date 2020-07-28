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
/*main()
{
	a1.getdata();
	a1.showdata();
}*/

/* main()
{
   	a1.getdata();
	a2.showdata();
}*/ 
//it give garbage value because a1 have different address of x and y then a2


 main()
{
   	a1.getdata();
   	a2=a1;//it will copy the value of a1 data type to a2 data type
	a2.showdata();
}//it give the exact value



