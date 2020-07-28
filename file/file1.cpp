#include<iostream>
#include<fstream>
using namespace std;
main()
{
	int y;
	ifstream r;
	r.open("K19RC.txt");
	r>>y;
	r.close();
	
	cout<<"Value Is: "<<y;
}
