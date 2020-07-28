#include<iostream>
#include<string.h>
using namespace std;
class A
{
	char name[5][55];
	int a;
	public: 
	void getname()
	{
		for(a=0;a<5;a++)
		{
			cout<<"ENTER NAME OF "<<a+1<<" STUDENT: ";
			//cin>>name[a];
			
			gets(name[a]);
		}
	}
	void display()
	{
		for(a=0;a<5;a++)
		{
			cout<<"NAME OF "<<a+1<<" STUDENT IS: "<<name[a]<<endl;
		}
	}
}a1;
main()
{
	 a1.getname();
	 a1.display();
}
