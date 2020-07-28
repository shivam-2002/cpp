#include<iostream>
using namespace std;
class A
{
	public:
	int x;
	float y;
	void getdata()
	{
		
	}
}a1,a2;
main()
{
	cout<<"SIZE OF CLASS: "<<sizeof(a1)<<endl;
	cout<<"ADDRESS OF a1  IS: "<<&a1<<endl;
	cout<<"ADDRESS OF X IS: "<<&a1.x<<endl;
	cout<<"ADDRESS OF Y IS: "<<&a1.y<<endl;
	cout<<"SIZE OF CLASS: "<<sizeof(a2)<<endl;
	cout<<"ADDRESS OF a2 IS: "<<&a2<<endl;
		cout<<"ADDRESS OF X IS: "<<&a2.x<<endl;
	cout<<"ADDRESS OF Y IS: "<<&a2.y<<endl;
	cout<<"ADDRESS OF FUNCTION: "<<&a1.getdata;//give garbage value
}
