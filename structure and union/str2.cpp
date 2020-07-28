#include<iostream>
using namespace std;
struct result
{
	float marks[5],mo,per;
	void getdata()
	{
		int x;
		cout<<"Enter Marks: ";
		for(x=0;x<5;x++)
		{
			cin>>marks[x];
		}
	}
	void fm()
	{
		int y;
		mo=0;
		for(y=0;y<5;y++)
		{
			mo=mo+marks[y];
		}
	}
	void showper()
	{
		per=(mo*100)/500;
		cout<<"Percentage is: "<<per;
	}
}st;
struct info
{
	void showinfo(result st2)//passing object of result to st2
	{
		//cout<<"Percentage is: "<<st.per;
		cout<<"Percentage is: "<<st2.per;
	}
}z;
main()
{
	st.getdata();
	st.fm();
	st.showper();
	z.showinfo(st);
}
