#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	string s;
	int a[n][n];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==a[i+1][j+1])
			{
				if(a[i][j]==1)
				{
					s="4-queen negative";
			         break;
				}
				
			}
			else if (a[i][j]==a[i-1][j-1])
			{
				if(a[i][j]==1)
				{
				
				s="4-queen negative";
				break;
			    }
			}

		}
	}
	if(s=="4-queen negative")
	cout<<s;
	else
	cout<<"4-queen positive";
}
