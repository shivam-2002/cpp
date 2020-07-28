#include<iostream>
using namespace std;
struct result
{
	float marks[5],mo,per;
	void getdata()
	{
		int x;
		mo=0;
		cout<<"Enter Marks: ";
		for(x=0;x<5;x++)
		{
			cin>>marks[x];
			mo=mo+marks[x];
		}
	}
	void showper()
	{
		per=(mo*100)/500;
		cout<<"Percentage is: "<<per;
	}
	void p()
	{
		cout<<"Welcome In This world!";
	}
}st;
main()
{
	st.getdata();
	st.showper();
}
