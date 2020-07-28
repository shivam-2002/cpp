#include<iostream>
using namespace std;
class bank
{
	public:
	float credit[25],withdraw[25],totalcredit=0,totalwithdraw=0,c;
	void getdata()
	{
		int x;
		cout<<"Enter Number of withdrawel Transaction: ";
		cin>>x;
		cout<<"Enter withdrawel amount: ";
		for(int a=0;a<x;a++)
		{
			cin>>withdraw[a];
			totalwithdraw=totalwithdraw+withdraw[a];
		}
		cout<<"total_withdraw_amount: "<<totalwithdraw<<endl;
	}
	void cre()
	{
		int y;
		cout<<"Enter Number of Credit Transaction: ";
		cin>>y;
		cout<<"Enter Credited amount: ";
		for(int a=0;a<y;a++)
		{
			cin>>credit[a];
			totalcredit=totalcredit+credit[a];
		}
		cout<<"total_credit_amount: "<<totalcredit<<endl;
	}
     void cal()
     {
     	c=totalcredit-totalwithdraw;
     	cout<<"current_balance_amount: "<<c;
	 }
}c;
main()
{
	c.getdata();
	c.cre();
	c.cal();
}
