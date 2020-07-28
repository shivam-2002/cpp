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
        f1();
}
int main()
{
    int n,a[5],b[5];
    b[0]=0;
    b[1]=0;
    b[2]=0;b[3]=0;b[4]=0;
    n=f1();
    for(int i=0;i<5;i++)
    {
        a[i]=n%10;
        n=n/10;
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
            	++b[i];
			}
        }
    }
    for(int i=0;i<5;i++)
    {
        if(b[i]==2)
            cout<<a[i]<<" ";
    }
}
