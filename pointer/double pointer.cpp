#include<iostream>
using namespace std;
main()
{
	int *p1,**p2,x=11;
	p1=&x;
	p2=&p1;
	cout<<"ADDRESS OF p1: "<<&p1<<endl;
	cout<<"ADDRESS OF p2: "<<&p2<<endl;
	cout<<"ADDRESS OF x: "<<&x<<endl;
	cout<<"VALUE AT ADDRESS HOLD BY p1: "<<*p1<<endl;
	cout<<"VALUE AT ADDRESS HOLD BY p2: "<<*p2<<endl;
	cout<<**p2;
}
