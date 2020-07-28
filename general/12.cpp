#include<iostream>
using namespace std;
int f1()
{
    int l;
    cin>>l;
    if((l>=1)&&(l<100000))
        return l;
    else
        f1();
}
int f2(int a)
{
    int r;
    cin>>r;
    if((r>=a)&&(r<=100000))
        return r;
    else
        f2(a);
}
int f3(int p,int q)
{
    int n;
    cin>>n;
    if((n>=p)&&(n<=q-1))
        return n;
    else 
        f3(p,q);
}
int main()
{
    int l,r,n;
    l=f1();
    r=f2(l);
    n=f3(l,r);
    int a[n],t;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
		}      
    }
    for(int i=0;i<n+1;i++)
    {
        if(a[i]!=l+i)
            cout<<l+i;
    }
}

