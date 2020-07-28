#include<iostream>
#include<fstream>
using namespace std;
class student
{
	string name;
	int rn;
	public: 
	void getdetails()
	{
		cout<<"ENTER NAME AND ROLL NO. : ";
		cin>>name>>rn;
	}
	void display()
	{
		cout<<"DETAILS ARE: ";
		cout<<name<<endl<<rn;
	}
};
main()
{
	student s;
	s.getdetails();//DATA IN THE RAM
	cout<<"SIZE OF OBJECT IS: "<<sizeof(s)<<endl;
	
	
	ofstream fw("k19rc1.txt");//open and create file
	cout<<"CURRENT POINTER POSITION: "<<fw.tellp()<<endl;
	fw.seekp(sizeof(s));
	fw.write((char *)&s,sizeof(s));//write data into file
	cout<<"CURRENT POINTER POSITION: "<<fw.tellp()<<endl;
	fw.close();//close file  
	
	ifstream fr("k19rc1.txt");
	fr.seekg(16);
	fr.read((char *)&s,sizeof(s));
	fr.close();
	
	s.display();
}
