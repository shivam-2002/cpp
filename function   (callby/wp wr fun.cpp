#include<iostream>
using namespace std;
int table(int x)
{
	for(int a=1;a<=10;a++)
	cout<<x<<"*"<<a<<"="<<x*a<<endl;
	return x;

}
main()
{
	int x,y;
	cout<<"Enter Number to write Table: ";
	cin>>x;
	y=table(x);
	cout<<y;//return valued of x
	
}

