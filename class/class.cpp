#include<iostream>
using namespace std;
class result
{
	public:float marks[25],mo,per;
	void getdata()
	{
		int x;
		cout<<"Enter marks: ";
		for(x=0;x<5;x++)
		{
			cin>>marks[x];
		}
	}
	void calmo()
	{
		int x;
		mo=0;
		for(x=0;x<5;x++)
		{
			mo=mo+marks[x];
		}
	}
	void percal()
	{
		per=(mo*100)/500;
	}
}st;

class info
{
    public:	void showinfo(result s2)
	{
		cout<<"Percentage is: "<<s2.per;
	}
}z;
main()
{
	st.getdata();
	st.calmo();
	st.percal();
	z.showinfo(st);
}
