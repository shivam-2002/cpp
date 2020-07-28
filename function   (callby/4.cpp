#include<iostream>
using namespace std;
display(int *y)
{
	*y=*y+1;
	cout<<"Value of x in display Is: "<<*y<<endl;
	cout<<"Address of x in display function is: "<<y<<endl;
}
main()
{
	int *x;
	cout<<"Enter Value of X: ";
	cin>>*x;
	display(x);
	cout<<"Value of x in main functio is: "<<*x<<endl;
	cout<<"Address of x in main function is: ";
}
