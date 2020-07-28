#include<iostream> //i=input, o=output, stream=flow
//#include<iostream.h> for turbo c;
using namespace std;
//input function is cin = console input,  for taking customise input from the keyboard
//output function is cout = console output,   it displays output as any message or any Value on the console output window
/*main()
{
	int a;
	cout<<"Enter Value of a: ";                 //<<=extrection operator
	cin>>a;   //>>= inserion operator
	cout<<"Value is : "<<a;
	
}*/
main()
/*{
	float p,r,t,si;
	cout<<"Enter principle: ";
	cin>>p;
	cout<<"Enter rate: ";
	cin>>r;
	cout<<"Enter time: ";
	cin>>t;
	si=(p*r*t)/100;
	cout<<"Simple interest is: "<<si;
}*/
{
	float p,r,t,si;
	cout<<"Enter Values: ";
	cin>>p>>r>>t;
	si=(p*r*t)/100;
	cout<<"Simple Intreast is: "<<si;
}


