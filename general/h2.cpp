#include<iostream>
using namespace std;
int f1()
{
    int n;
    cin>>n;
    if(1<=n<=99999)
        return n;
    else
        f1();
}
int main()
{
   int n,a[5],l;
    n=f1();
    for(int i=0;i<5;i++)
    {
        a[i]=n%10;
        n=n/10;
    }
    l=a[0];
    for(int i=0;i<5;i++)
    {
        if(l<a[i])
            l=a[i];
    }
    cout<<l;
}
