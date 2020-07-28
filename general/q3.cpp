#include<iostream>
using namespace std;
class A
{
	static int n;
	public:
		void size()
		{
			cout<<"Enter size of array: ";
			cin>>n;
		}
	protected:
		int a[a1.n],np;
	public:
		void array()
		{
			cout<<"Enter Element of array: ";
			for(int i=0;i<n;i++)
			{
				cin>>a1.a[i];
			}
		}
		A()
		{
			cout<<"Enter Posion of the element where new element enter: ";
			cin>>np;
			cout<<"Enter New Element: ";
			cin>>a1.a[np];
		}
		A(A &a2)
		{
			cout<<"Array Element in Copy Constructor: "<<endl;
			for(int i=0;i<a2.n;i++)
			{
				cout<<a2.a[i]<<endl;
			}
		}
};
int main()
{
	A a1;
	a1.size();
	a1.array();
}
