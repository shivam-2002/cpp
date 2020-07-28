#include<iostream>
using namespace std;
int main()
{
	int n=8;
	int *p=&n;
	*p=42;
	cout<<*p/0;
}
