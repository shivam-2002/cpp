#include<iostream>
using namespace std;
main()
{
	void *p;//DECLERATION OF VOID POINTER
	int x=11;
	p=&x;//P IS INITIALISED
	cout<<*(int *)p<<endl;
	
	float y=12.14;
	p=&y;// REINITIALIZATION OF POINTER
	cout<<*(float *)p<<endl;
	
	char z='A';
	p=&z;
	cout<<*(char *)p;
}
