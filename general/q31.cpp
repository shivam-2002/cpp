#include<iostream>
using namespace std;
class A
{
	int np,x,*q;
	public:
	A(int *p,int n)
	{
		x=n;
		cout<<"Enter posintion number of new element: ";
		cin>>np;
		p=p+np;
		cout<<"Enter new element: ";
		cin>>*p;
		p=p-np;
		q=p;
		/*for(int i=0;i<n;i++)
		{
			cout<<*p<<endl;
			p++;
		}*/
	}
	A(A &a2)
	{
		for(int i=0;i<a2.x;i++)
		{
			cout<<*(a2.q)<<endl;
			a2.q++;
		}
	}
};
main()
{
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	int *p,a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	p=a;
	A a1(p,n),a2=a1;
}
