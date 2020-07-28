#include<iostream>
using namespace std;
int main()
{
	int x;
	A:
		cout<<"Enter Value of x: ";
		cin>>x;
	B:
		cout<<"we will check number is even or not"<<endl;
	try
	{
		cout<<"NOW HAVE BEEN ENTERED IN TRY BLOCK: "<<endl;
		if(x%2!=0)
		{
			cout<<"x is not even Number: "<<endl;
			throw x;
		}
		cout<<"x is even number so not need to throw it: "<<endl;
		
	}
	catch (int x)
	{
		cout<<"Now catch can handle the exception thrown by try: "<<endl;
		cout<<"RE";
		goto A;
	}
}
