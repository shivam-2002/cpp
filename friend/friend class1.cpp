#include<iostream>
using namespace std;
class A
{
	int x;
	float marks[5],mo=0,per;
	public:
		void getmarks()
		{
			cout<<"Enter Marks Obtained in Five Subjects: ";
			for(x=0;x<5;x++)
			{
				cin>>marks[x];
				mo=mo+marks[x];
			}
		}
		void calculate_percentage()
		{
			per=(mo*100)/500;
			cout<<"Percentage Obtained is: "<<per;
		}
};
class B
{
	int x;
	float marks[5],mo=0,per;
	public:
		void getmarks()
		{
			cout<<"Enter Marks Obtained in Five Subjects: ";
			for(x=0;x<5;x++)
			{
				cin>>marks[x];
				mo=mo+marks[x];
			}
		}
		void calculate_percentage()
		{
			per=(mo*100)/500;
			cout<<"Percentage Obtained is: "<<per;
		}
};
class C
{
	int x;
	float marks[5],mo=0,per;
	public:
		void getmarks()
		{
			cout<<"Enter Marks Obtained in Five Subjects: ";
			for(x=0;x<5;x++)
			{
				cin>>marks[x];
				mo=mo+marks[x];
			}
		}
		void calculate_percentage()
		{
			per=(mo*100)/500;
			cout<<"Percentage Obtained is: "<<per;
		}
};
