#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,p=0;
		cin>>n;
		{
			do
			{
				k=n%10;
				n=n/10;
				if(k==0)
					p+=6;
				else if(k==1)
					p+=2;
				else if(k==2)
					p+=5;
				else if(k==3)
					p+=5;
				else if(k==4)
					p+=4;
				else if(k==5)
					p+=5;
				else if(k==6)
					p+=6;
				else if(k==7)
					p+=4;
				else if(k==8)
					p+=7;
				else 
					p+=6;
			}while(n!=0);
			cout<<p;
		}
	}
}
