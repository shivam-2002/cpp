#include<iostream>
using namespace std;
main()
{
	int *p,x=11;
	p=&x;//initialization of pointer
	cout<<"ADDRESS OF p: "<<&p<<endl;
	cout<<"ADDRESS OF x: "<<&x<<endl;
	cout<<"ADDRESS OF HOLD BY p: "<<p<<endl;
	cout<<"VALUE AT ADDRESS HOLD BY p: "<<*p<<endl;
	p++;
	cout<<"Address hold by p: "<<p<<endl;//it hold next address
	p+1;
	cout<<"Address hold by p: "<<p<<endl;
	cout<<"Address hold by p: "<<p+1<<endl;
	
}
