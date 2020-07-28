#include<iostream>
using namespace std;
int main()
{
	int num=365;
	float denom=365;
	int n=0;
	float p=1;
	while(p>.5)
	{
		p=p*(num)/denom;//problality having not same birth day
		num--;
		n++;
		cout<<"prob "<<p<<"and peple "<<n<<endl;
	}
}
