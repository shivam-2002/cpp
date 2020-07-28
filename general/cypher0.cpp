#include<bits/stdc++.h>
using namespace std;
main()
{
	int arr[]={1,2,4,2};
	int n=4;
	map<int,int>m;
	for(int i=0;i<n;i++)
	{
		int val=arr[i];
		m[val]++;
	}
	map<int,int>::iterator itr=m.begin();
	while(itr!=m.end())
	{
		cout<<(* itr).first<<" "<<(*itr).second<<endl;
		itr++;
	}
}
