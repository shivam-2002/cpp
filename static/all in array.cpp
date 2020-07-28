#include<iostream>
using namespace std;
class A
{
	static int n;
	public:
	void size()
	{
		cout<<"Enter Size of array: ";
		cin>>n;
	}
	int a[n],x;
	public:
	void getarray()
	{
		cout<<"Enter array Elements: ";
		for(x=0;x<n;x++)
		{
			cin>>a[x];
		}
	}
	void linerarsearch()
	{
		
	}
	void binarysearch()
	{
		
	}	
	void shortin()
	{
		
	}
	void deletion()
	{
		
	}
}o;
int A::n;
main()
{
	o.size();
	o.getarray();
}
