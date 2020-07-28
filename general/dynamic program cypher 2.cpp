//Dynamic programming:- used for store the rest for which we have computed
#include<iostream>
using namespace std;
int minStepsTopDown(int n)
{
	if(n==1)
	{
		return 0;
	}
	int op1,op2,op3;
	op1=op2=op3;
	op2=n%2==0?minStepsTopDown(n/2):INT_MAX;
	op3=n%3==0?minStepsTopDown(n/3):INT_MAX;
	int ans=min(op1,min(op2,op3))+1;
	return ans;
}
int MinsStepsBottumup(int n)
{
	int bdp[100]={0};
}
int main()
{
	int n,dp[100]={0};
	cin>>n;
	cout<<minStepsTopDown(n);
	
}
