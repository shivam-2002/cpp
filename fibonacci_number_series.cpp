#include<iostream>//fibonacci series f(n)=n(n-1)+f(n-2)
using namespace std;
int main()
{
	int n;//number which's fibonacci series we have to find
	cin>>n;
	int f(int n);//function decleration
	f(n);//function call
	
}
int f(int n)//function decleration
{
	int n1,n2,n3;
	n1=1;//f(1)//f(0)=0
	n2=1;//f(2)
	cout<<n1<<" "<<n2<<" ";//printing f(0) and f(1)
	for(int i=3;i<=n;i++)
	{
		n3=n1+n2;
		cout<<n3;//printing f(i)
		n1=n2;//assignig f(i)=f(i-1)
		n2=n3;//assigning f(i-1)=f(i-2)
	}
}
