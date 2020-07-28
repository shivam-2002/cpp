#include<iostream>
#include<fstream>
using namespace std;
main()
{
	int i;
	string name;
	ifstream r;
	r.open("detail.txt");
	//r>>name;
	//cout<<name;
	for(i=0;i<10;i++)
	{
		while(r.eof())
		r>>name[i];
		cout<<name[i];
	}
	r.close();
}
