#include<iostream>
using namespace std;
class A
{
	int *a;
	public:
		void newfun()
		{
			a=new int[10];
			cout<<"Enter 10 Numbers:";
			for(int i=0;i<10;i++)
			{
				cin>>a[i];
			}
		}
		void delfun()
		{
			cout<<"The memoary is deallocated:";
			delete a;
		}
		void check()
		{
			for(int i=0;i<10;i++)
			{
				cout<<a[i]<<ends;
			}
		}
};
int main()
{
	A a;
	a.newfun();
	a.delfun();
	a.check();
}
