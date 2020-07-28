#include<iostream>
#include<fstream>
using namespace std;
class A
{
	char name[50],branch[50];
	int roll,reg,sem;
	public:
	void display(int n)
	{
		for(int i=0;i<n;i++)
		{	
		ifstream re("detail.txt");
		re>>name[i]>>roll[i]>>reg[i]>>sem[i]>>branch[i];
		cout<<name[i]<<ends<<roll[i]<<ends<<reg[i]<<ends<<sem[i]<<ends<<branch[i]<<endl;
		}
	}	
};
main()
{
	A a1;
	int n;
	cout<<"Enter number of students: ";
	cin>>n;
	char name[50][n],branch[n];
	int roll_no[n],sem[n];
	long long int reg_no[n];
	cout<<"Enter Name,Roll number, Registration number, Semester and Branch:";
	ofstream w("detail.txt");
	for(int i=0;i<n;i++)
	{
		cin>>name[i]>>roll_no[i]>>reg_no[i]>>sem[i]>>branch[i];
		w<<name[i]<<roll_no[i]<<reg_no[i]<<sem[i]<<branch[i];
	}
	w.close();
	ifstream r("detail.txt");
	r.read((char *)&a1,sizeof(a1));
	r.close();
	a1.display(n);
}
