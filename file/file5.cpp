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
	/*s.getdetails();//DATA IN THE RAM


	ofstream fw("k19rc1.txt");//open and create file
	fw.write((char *)&s,sizeof(s));//write data into file
	fw.close();//close file
	*/
	ifstream fr("k19rc1.txt");
	fr.read((char *)&s,sizeof(s));
	fr.close();

	s.display();
}
