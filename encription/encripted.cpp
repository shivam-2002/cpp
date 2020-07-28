#include<iostream>
using namespace std;
main()
{
	char a[25];
	cout<<"Enter string: ";
	cin>>a;
	int x=0;
	while(a[x]!='\0')
	x++;
	char b[10];
	b[0]='~';
	b[1]='!';
	b[2]='@';
	b[3]='#';
	b[4]='$';
	b[5]='%';
	b[6]='^';
	b[7]='&';
	b[8]='*';
	b[9]=')';
	b[10]='_';
	int p;
	cout<<"Enter a random number less than 10 and greater than 0: ";
	cin>>p;
	int r;
	r=p+x;
	char c[x];
	int t;
	for(t=p;t<=r-1;t++)
	{
	cout<<b[t];
    }  
	if(t>10)
		{
		for(int t=0;t<((p+x)-10-1);t++)
		cout<<b[t];
		} 
	/*c[t]=b[t];
	
	for(int n=p;n<=r;n++)
	cout<<c[n];  */
	
	
	
}
