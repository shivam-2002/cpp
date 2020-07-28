#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
		int in()
		{
			cout<<"Enter Value of x and y: ";
			cin>>x>>y;
		}
		int div()
		{
				if(y==0)
				{
					cout<<"DIVISION IS NOT POSSIBLE: "<<endl;
					throw(y);
				}
				else
				{
					cout<<"DIVISION OF X ANY Y IS: "<<x/y<<endl;
				}
		}
};
int main()
{
	A a;
	try
	{
		a.in();
		a.div();
	}
	catch(int y)
	{
		cout<<"Because Y is"<<y;
	}
}
