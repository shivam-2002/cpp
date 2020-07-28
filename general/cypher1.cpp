#include<iostream>
using namespace std;//This is example of dynamic programming
main()
{
	int n;
	int arr[n],sum[n],diff;
	cout<<"Enter Number of Elements in Array: ";
	cin>>n;
	cout<<"Enter elements of array: ";
	sum[0]=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum[i+1]=sum[i]+arr[i];
	}
	cout<<sum[n];
}
