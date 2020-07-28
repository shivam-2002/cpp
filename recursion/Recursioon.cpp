#include<iostream>
using namespace std;
display(int x)
{
	if(x<=0)
	return 0;
	else
	cout<<"Value of x: "<<x<<endl;
	display(x-1);
}
main()
{
	int a;
	cout<<"Enter Value of A: ";
	cin>>a;
	display(a);
}
