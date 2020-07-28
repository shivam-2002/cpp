#include<iostream>
using namespace std;
class adm
{
	static long long int rn,cn;
	static float pqper;
	static string name;
	public:
		static void getdetails()
		{
			cout<<"ENTER STUDENT DETAILS: "<<endl;
			cout<<"REGISTRATION NUMBER: "<<rn<<endl;
			cout<<"NAME: ";
			//cin>>name;
			getline(cin,name);
			cout<<"CONTACT NUMBER: ";
			cin>>cn;
			cout<<"PREVIOUS QUALIFICATION PERCENTAGE: ";
			cin>>pqper;
		}
		void showdetails()
		{
			cout<<"DETAILS OF STUDENT IS: "<<endl;
			cout<<"REGISTRATION NUMBER IS: "<<name<<endl;
			cout<<"CONTACT NUMBER : "<<cn<<endl;
			cout<<"PREVIOUS QUALIFICATION PERCENTAGE: "<<pqper<<endl;
	    }
};
long long int adm::rn=11200001;
long long int adm::cn;
float adm::pqper;
string adm::name;
main()
{
	adm LPU,DELHI,HP,AP;
	adm::getdetails();
	LPU.showdetails();
	DELHI.showdetails();


}
