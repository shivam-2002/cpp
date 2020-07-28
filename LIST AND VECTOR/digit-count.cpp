#include<iostream>
using namespace std;
int main()
{
	int b[52];
	char a[20],s=0;
	cin>>a;
	for(int i=0;a[i]!='\0';i++)
	{
		s++;
	}
	for(int i=0;i<52;i++)
	{
		b[i]=0;
	}
	for(int i=0;i<s+1;i++)
	{
		if(a[i]=='a')
		{
			b[0]++;
		}
		if(a[i]=='b')
		{
			b[1]++;
		}
		if(a[i]=='c')
		{
			b[2]++;
		}
		if(a[i]=='d')
		{
			b[3]++;
		}
		if(a[i]=='e')
		{
			b[4]++;
		}
		if(a[i]=='f')
		{
			b[5]++;
		}
		if(a[i]=='g')
		{
			b[6]++;
		}
		if(a[i]=='h')
		{
			b[7]++;
		}
		if(a[i]=='i')
		{
			b[8]++;
		}
		if(a[i]=='j')
		{
			b[9]++;
		}
		if(a[i]=='k')
		{
			b[10]++;
		}
		if(a[i]=='l')
		{
			b[11]++;
		}
		if(a[i]=='m')
		{
			b[12]++;
		}
		if(a[i]=='n')
		{
			b[13]++;
		}
		if(a[i]=='o')
		{
			b[14]++;
		}
		if(a[i]=='p')
		{
			b[15]++;
		}
		if(a[i]=='q')
		{
			b[16]++;
		}
		if(a[i]=='r')
		{
			b[17]++;
		}
		if(a[i]=='s')
		{
			b[18]++;
		}
		if(a[i]=='t')
		{
			b[19]++;
		}
		if(a[i]=='u')
		{
			b[20]++;
		}
		if(a[i]=='v')
		{
			b[21]++;
		}
		if(a[i]=='w')
		{
			b[22]++;
		}
		if(a[i]=='x')
		{
			b[23]++;
		}
		if(a[i]=='y')
		{
			b[24]++;
		}
		if(a[i]=='z')
		{
			b[25]++;
		}
	}
	for(int i=0;i<s+1;i++)
	{
		for(int j=i;j<26;j++)
		{
			if(b[j]!=0)
			{
				if(a[i]=='a')
					{
						cout<<a[i]<<b[0];
						b[0]=0;
					}
				else if(a[i]=='b')
				{
					cout<<a[i]<<b[1];
					b[1]=0;
				}
				else if(a[i]=='c')
				{
					cout<<a[i]<<b[2];
					b[2]=0;
				}
				else if(a[i]=='d')
				{
					cout<<a[i]<<b[3];
					b[3]=0;
				}
				else if(a[i]=='e')
				{
					cout<<a[i]<<b[4];
					b[4]=0;
				}
		else if(a[i]=='f')
		cout<<a[i]<<b[5];
		else if(a[i]=='g')
		cout<<a[i]<<b[6];
		else if(a[i]=='h')
		cout<<a[i]<<b[7];
		else if(a[i]=='i')
		cout<<a[i]<<b[8];
		else if(a[i]=='j')
		cout<<a[i]<<b[9];
		else if(a[i]=='k')
		cout<<a[i]<<b[10];
		else if(a[i]=='l')
		cout<<a[i]<<b[11];
		else if(a[i]=='m')
		cout<<a[i]<<b[12];
		else if(a[i]=='n')
		cout<<a[i]<<b[13];
		else if(a[i]=='o')
		cout<<a[i]<<b[14];
		else if(a[i]=='p')
		cout<<a[i]<<b[15];
		else if(a[i]=='q')
		cout<<a[i]<<b[16];
		else if(a[i]=='r')
		cout<<a[i]<<b[17];
		else if(a[i]=='s')
		cout<<a[i]<<b[18];
		else if(a[i]=='t')
		cout<<a[i]<<b[19];
		else if(a[i]=='u')
		cout<<a[i]<<b[20];
		else if(a[i]=='v')
		cout<<a[i]<<b[21];
		else if(a[i]=='w')
		cout<<a[i]<<b[22];
		else if(a[i]=='x')
		cout<<a[i]<<b[23];
		else if(a[i]=='y')
		cout<<a[i]<<b[24];
		else if(a[i]=='z')
		cout<<a[i]<<b[25];
			}
		
		}
	}
}
