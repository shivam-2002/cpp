#include<iostream>
using namespace std;
void sum(int x,int y)
{
	cout<<"INTEGER ADDITION IS: "<<x+y<<endl;
}
void sum(double z,double a=8.9)
{
	cout<<"FLOAT ADDITION IS: "<<z+a;
}
main()
{
	int a,b;
	float c,d;
	cout<<"ENTER TWO INTEGER VALUE : ";
	cin>>a>>b;
	cout<<"ENTER TWO FLOAT VALUE: ";
	cin>>c>>d;
	//sum(a,b);//FUNCTION CALL
	sum(c, d);
	sum(a,b);
	
}
