#include<iostream>
using namespace std;
main()
{
    char c[20];
    cin>>c;
    int t=0,k=0;
    for(int i=0;c[i]!='\0';i++)
    {
        t++;
    }
    char a[t];
    for(int i=0;i<t;i++)
    {
    	a[i]=c[i];
	}
    char b[t];
    for(int i=0;i<t;i++)
    {
        b[i]=a[t-i-1];
        if(b[i]==c[i])
        {
        	k++;
		}
    }
    if(t==k)
    cout<<"True";
    else
    cout<<"False";
}
