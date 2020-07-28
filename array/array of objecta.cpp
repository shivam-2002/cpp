#include<iostream>
using namespace std;
class A
{
	int x;
	public: 
	void getx()
	{
		cout<<"ENTER x: ";
		cin>>x;
	}
};
main()
{
	//A a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
	A a[10];
	for(int x=0;x<10;x++)
	{
		a[x].getx();
	}
}
