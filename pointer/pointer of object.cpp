#include<iostream>
using namespace std;
class A
{
	int x;
	public: 
	void getx()
	{
		cout<<"Enter X: ";
		cin>>x;
	}
	void showx()
	{
		cout<<"X is: "<<x;
	}
};
main()
{
	A a1,*a2;//a2 IS POINTER OBJECT
	a2=&a1;//coping address of a1 to a2
	a2->getx();//or (*a2).getx();
	a2->showx();//or (*a2).showx();
}
