#include<iostream>
using namespace std;
struct result
{
	float marks[5],mo,per;//DATA MEMEBERS
	void getdata()//MEMBER FUNCTION
	{
			int x;
	cout<<"Enter marks:";
	for(x=0;x<5;x++)
		{
			cin>>marks[x];
			mo=mo+marks[x];
		}
	per=(mo*100)/500;
	cout<<"Percentage Is: "<<per;
		
	}
}st;//OBJECT
main()
{
  st.getdata();//FUNCTION CALL
}

