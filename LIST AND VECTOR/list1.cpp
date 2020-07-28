#include<iostream>
#include<list>
using namespace std;
display(list<int> a)
{
	list<int>::iterator p;
	for(p=a.begin();p!=a.end();p++)
	{
		cout<<*p<<ends;
	}
	cout<<endl;
}
int main()
{
	int b;
	list<int>x;
	list<int>y;
	for(int i=0;i<3;i++)
	{
		cout<<"Enter Element of x: ";
		cin>>b;
		x.push_back(b);
	}
	cout<<"Element of list x: ";
	display(x);
	for(int i=0;i<4;i++)
	{
		cout<<"Enter Element of list y: ";
		cin>>b;
		y.push_back(b);
	}
	cout<<"Element of list y: ";
	display(y);
	cout<<"Pust element at front: ";
	x.push_front(100);
	display(x);
	cout<<"Poppint element at front: ";
	y.pop_front();
	display(y);
	cout<<"Sortedded element of x: ";
	x.sort();
	display(x);
	cout<<"Sortedded element of y: ";
	y.sort();
	display(y);
	cout<<"Merge element: ";
	x.merge(y);
	display(x);
}
