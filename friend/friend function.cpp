#include<iostream>
using namespace std;
class A
{
	int x;//CLASS MEMBER
	public: void getx()//CLASS MEMBER
	{
		cout<<"Enter x: ";
		cin>>x;
	}
	friend void showx(A a2);//declaration of friend function
}a1;//IT IS OBJECT OF CLASS
void showx(A a2)//function defanitaion//NOT A MEMBER OF CLASS  a1 copies to a2
{
	cout<<"Value of x is: "<<a2.x;
}
main()
{
	a1.getx();//FUNCTION CALL TO CLASS MEMBER FUNCTION
	showx(a1);//FUNCTION CALL TO OUTSIDE FUNCTION
}
