#include<iostream>
using namespace std;
main()
{
	float a[5],t;
	cout<<"Enter percentage: ";
	for(int x=0;x<5;x++)
	{
		cin>>a[x];
	}
	for(int x=0;x<5;x++)
	{
		for(int y=0;y<4;y++)
		{
			if(a[y]>a[x])
			{
				t=a[x];
				a[x]=a[y];
				a[y]=t;
			}
		}
	}
	cout<<"Heighst percentage is: "<<a[4];
}
