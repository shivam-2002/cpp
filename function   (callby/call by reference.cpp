#include<iostream>
using namespace std;
void display(int &x)
{
	x=x+1;
	cout<<"Value of x in display Is: "<<x<<endl;
	cout<<"Address of x in display function is: "<<&x<<endl;
}
main()
{
	int x;
	cout<<"Enter Value of X: ";
	cin>>x;
	display(x);
	cout<<"Value of x in main functio is: "<<x<<endl;
	cout<<"Address of x in main function is: "<<&x;
}                                                                                                                                                                                                                                                                                                                                                                                     
