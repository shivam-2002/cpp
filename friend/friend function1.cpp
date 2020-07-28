#include<iostream>
using namespace std;
class A
{
	int m[5],x,y;
	float s;
	public: 
	void inmarks()
	{
		cout<<"Enter marks of Five Subjects: ";
		for(x=0;x<5;x++)
		{
			cin>>m[x];
		}
	}
	friend void per(A a2);
}a1;
void per(A a2)
{
	for(a2.y=0;a2.y<5;a2.y++)
	{
		a2.s=a2.s+a2.m[a2.y];
	}
	a2.s=(a2.s*100)/500;
	cout<<"Percentage of marks Obtained is: "<<a2.s;
}
main()
{
	a1.inmarks();
	per(a1);
}
