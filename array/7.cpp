#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	int a[n],p=1,q=1,r=1,s=1;
	for(int i=0;i<n;i++)
	{
		cin>>a[n];
	}
	for(int j=0;j<n;j++)
	{
		if(a[0]<a[1])
		{
			for(int k=0;k<n;k++)
			{
			if(a[j]<a[j+1])
			{
				p=p+j+1;
			}
			else
			{
				q=q+n-j-1;
			}
		    }
		    	cout<<(p+q);
		}
		else
		{
			for(int z=0;z<n;z++)
			{
				if(a[z]>a[z+1])
				{
					r=r+z+1;
				}
				else
				{
					s=s+n-z-1;
				}
			}
			cout<<(r+s);
		}
	}
}
