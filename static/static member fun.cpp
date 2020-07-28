#include<iostream>
using namespace std;
class A                 
{
	static int x;//DATA MEMBER 
	static int y;
	public:
    static void input()//MEMBER FUNCTION
	{
		cout<<"ENTER x: ";
		cin>>x;
		y=x;
	}
	void output()//MEMBER FUNCTION
	{
		cout<<"VALUE OF x IS:"<<x<<endl;
	}
};
int A::x;
int A::y;
main()
{
	A::input();//input function call with static function not with object
	A a1,a2,a3,a4;
	a1.output();
	a2.output();
	a3.output();
}
