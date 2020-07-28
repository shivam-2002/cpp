#include<iostream>
#include<fstream>
using namespace std;
main()
{
	string name,address;
	long long int rn,cn;
	//cout<<"ENTER NAME,ADDRESS,RN AND CN: ";
	//cin>>name>>address>>rn>>cn;
	//ofstream w;
	//w.open("K19RC.txt");
	//fstream w ("K19RC.txt");
	//w<<name<<endl<<address<<endl<<rn<<endl<<cn;
	//w.close();
	ifstream r;
	r.open("K19RC.txt");
	r>>name>>address>>rn>>cn;
	r.close();
	cout<<name<<endl<<address<<endl<<rn<<endl<<cn;
}
