#include<iostream>
using namespace std;
struct result
{
	float marks[5],mo,per;
}st;
main()
{
	int x;
	cout<<"Enter marks:";
	for(x=0;x<5;x++)
		{
			cin>>st.marks[x];
			st.mo=st.mo+st.marks[x];
		}
	st.per=(st.mo*100)/500;
	cout<<"Percentage Is: "<<st.per;
}

