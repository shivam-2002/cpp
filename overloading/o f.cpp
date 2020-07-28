#include<iostream>
using namespace std;
class A
{
	public: 
	void sum(int x,int y)
	{
		cout<<" integer adddition is : "<<x+y;
	}
	void sum(float x,float y)
	{
		cout<<"float addistion is: "<<x+y;
	}
}a1;
main()
{
	/*int a,b;
	float c,d;
	cout<<"Enter two integer value: ";
	cin>>a,b;
	cout<<"Enter two float value: ";
	cin>>c,d;*/
	a1.sum(11,34);
	//a1.sum(11.3,34.6);//we cannot call same function two times
}
