#include<iostream>
using namespace std;
class A 
{
 	int x,y;
 	float marks[5],totalmarks,per;
 	public: void getmarks()
 	{
 		cout<<"Enter Marks: ";
 		for(x=0;x<5;x++)
 		{
 			cin>>marks[x];
		 }
	 }
	 private: friend void calculatepercentage(A a2);//privater function also access by friend function
}a1;
void calculatepercentage(A a2)
{
	a2.totalmarks=0;
	for(a2.y=0;a2.y<5;a2.y++)
	{
		a2.totalmarks=a2.totalmarks+a2.marks[a2.y];
	}
	a2.per=(a2.totalmarks*100)/500;
	cout<<"Percentage of marks is: "<<a2.per;
}
main()
{
	a1.getmarks();
	calculatepercentage(a1);
}

