#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	if(n>0)
	{
		if(n%2==0)
	 {
		for(int x=n-1;x>=1;x=x-2)
		{
			cout<<x<<endl;
		}
		for(int x=2;x<=n;x=x+2)
		{
			cout<<x<<endl;
		}
	 }
	  else
	  {
		for(int x=n;x>=1;x=x-2)
		{
			cout<<x<<endl;
		}
		for(int x=2;x<n-1;x=x+2)
		{
			cout<<x<<endl;
		}
	  }
	}


	else
	{
		if(n%2==0)
	  {
		for(int x=n+1;x<=1;x=x+2)
		{
			cout<<x<<endl;
		}
	  
		for(int x=-2;x>=n;x=x-2)
		{
			cout<<x<<endl;
		}
      }
        else
	  {
		for(int x=n;x<=1;x=x+2)
		{
			cout<<x<<endl;
		}
		for(int x=-2;x<n+1;x=x-2)
		{
			cout<<x<<endl;
		}
	  }
	}
}
