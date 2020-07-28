#include<iostream>
using namespace std;
int main()
{
	int *a;
	a=new int[10];
	for(int i=0;i<10;i++)
	{
		cout<<"Enter a number: ";
		cin>>a[i];
	}
	cout<<"10 Numbers are: ";
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<ends;
	}
}
