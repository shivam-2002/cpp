#include<iostream>
using namespace std;
class C2;
class C3;
class C1
{
	int x1,y1;
	float marks1[5],mo1=0,per1;
	public: getmarks1()
	{
		cout<<"Enter marks of five subject: ";
		for(x1=0;x1<5;x1++)
		{
			cin>>marks1[x1];
			mo1=mo1+marks1[x1];
		}
		per1=(mo1*100)/500;
	}
		friend void company(C1 b1,C2 b2,C3 b3);
}c1;
class C2
{
	int x2,y2;
	float marks2[5],mo2,per2;
	public: getmarks2()
	{
		cout<<"Enter marks of five subject: ";
		for(x2=0;x2<5;x2++)
		{
			cin>>marks2[x2];
			mo2=mo2+marks2[x2];
		}
			per2=(mo2*100)/500;
	}
friend void company(C1 b1,C2 b2,C3 b3);
}c2;
class C3
{
	int x3,y3;
	float marks3[5],mo3,per3;
	public: getmarks3()
	{
		cout<<"Enter marks of five subject: ";
		for(x3=0;x3<5;x3++)
		{
			cin>>marks3[x3];
			mo3=mo3+marks3[x3];
		}
			per3=(mo3*100)/500;
	}
		friend void company(C1 b1,C2 b2,C3 b3);
}c3;
void company(C1 b1,C2 b2,C3 b3)
{
	if((c1.per1>c2.per2)&&(c1.per1>c3.per3))
	{
		cout<<"Student of Class 1 is Selectd";
	}
	else if((c2.per2>c1.per1)&&(c2.per2>c3.per3))
	{
		cout<<"Student of Class 2 is Selectd";
	}
	else
	{
		cout<<"Student of class 3 is selected";
	}
}
main()
{
	c1.getmarks1();
	c2.getmarks2();
	c3.getmarks3();
	company(c1,c2,c3);
}

