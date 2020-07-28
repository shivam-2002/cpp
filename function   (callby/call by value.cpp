#include<iostream>
using namespace std;
void display(int x)
{
	x=x+1;
	cout<<"Value of x in display is: "<<x<<endl;
	cout<<"Address of x in dispaly is: "<<&x<<endl;
}
main()
{
	int x;
	cout<<"Enter a value to assign x: ";
	cin>>x;
	display(x);
}
