#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[100];
    cin>>a;
    int l;
    l=strlen(a);
    cout<<l<<endl;
    int c=0,o=0,v=0,i=0,d=0;
    for(int j=0;j<l;j++)
    {
    	if(a[j]=='c')
    	{
    		++c;
		}
		else if(a[j]=='o')
		{
			++o;
		}
		else if(a[j]=='v')
		{
			++v;
		}
		else if(a[j]=='i')
		{
			++i;
		}
		else if(a[j]=='d')
		{
			++d;
		}
	}
	cout<<"c: "<<c<<endl;
	cout<<"o: "<<o<<endl;
	cout<<"i: "<<i<<endl;
	cout<<"v: "<<v<<endl;
	cout<<"d: "<<d<<endl;
	int p=20;
	if(p<=c)
	{
		p=c;
	}
	if(p>=o)
	{
		p=o;
	}
	if(p>=v)
	{
		p=v;
	}
	if(p>=i)
	{
		p=i;
	}
	if(p>=d)
	{
		p=d;
	}
	cout<<p;
}
