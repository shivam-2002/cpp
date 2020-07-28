#include<iostream>
using namespace std;
int f()
{
    int r;
    cin>>r;
    if((r>1)&&(r<=100000))
        return r;
    else
        f();
}
int f1(int x)
{
    int l;
    cin>>l;
    if((l>=1)&&(l<=x))
        return l;
    else
        f1(x);
}
int f2(int y)
{
    int n;
    cin>>n;
    if((n>=1)&&(n<=y-1))
    {
        return n;
    }
    else
        f2(y);
}
int main()
{
    int r,l,n;
    r=f();
    l=f1(r);
    n=f2(r);
}
