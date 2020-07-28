#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int i;
	long long int contact_no[10],aadhar_no[10];
	string name[10];
	for(i=0;i<10;i++)
	{
		cout<<"Enter your name: ";
		cin>>name[i];
		cout<<"Enter your mobile number: ";
		cin>>contact_no[i];
		cout<<"Enter your Aadhar number: ";
		cin>>aadhar_no[i];
	}
	ofstream w;
	w.open("detail.txt");
	for(i=0;i<10;i++)
	{
		w<<name[i]<<endl<<contact_no[i]<<endl<<aadhar_no[i]<<endl;
	}
	w.close();
	
}
