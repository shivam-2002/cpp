#include<iostream>
using namespace std;
int f1()
{
    int n;
    cin>>n;
    if(1<=n<=99999)
    {
    	return n;
	}
    else
    {
    	f1();
	} 
}
int main()
{
    int n,a[5];
    n=f1();
    for(int i=0;i<5;i++)
    {
        a[4-i]=n%10;
        n=n/10;
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]==2)
        {
        	cout<<a[i]<<ends;
		} 
        else if(a[i]==3)
        {
        	cout<<a[i]<<ends;
		}
		else if(a[i]==5)
		{
			cout<<a[i]<<ends;
		}
		else if(a[i]==7)
		{
			cout<<a[i]<<ends;
		}
    }
}
