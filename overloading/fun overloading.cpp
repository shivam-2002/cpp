#include<iostream>
using namespace std;
void sum(float x,float y)
{
	cout<<"INTEGER ADDITION IS: "<<x+y<<endl;
}
void sum(float x,int y)
{
	cout<<"FLOAT ADDITION IS: "<<x+y;
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
	sum(a,c);
	sum(b,d);
	
}
