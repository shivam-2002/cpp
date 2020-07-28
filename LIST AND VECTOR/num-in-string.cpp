#include<iostream>
#include<string>
#include<list>
using namespace std;
int main()
{
	char c[25];
	cin>>c;
	for(int i=0;c[i]!='\0';i++)
	{if(c[i]=='0')
		{
			cout<<0*2;
		}
		if(c[i]=='1')
		{
			cout<<1*2;
		}
		if(c[i]=='2')
		{
			cout<<2*2;
		}
		if(c[i]=='3')
		{
			cout<<3*2;
		}
		if(c[i]=='4')
		{
			cout<<4*2;
		}if(c[i]=='5')
		{
			cout<<5*2;
		}if(c[i]=='6')
		{
			cout<<6*2;
		}if(c[i]=='7')
		{
			cout<<7*2;
		}if(c[i]=='8')
		{
			cout<<8*2;
	 	}
	 	if(c[i]=='9')
		{
			cout<<9*2;
		}
	}
}
