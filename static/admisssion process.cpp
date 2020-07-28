#include<iostream>
using namespace std;
class A
{
	static int roll_no,registration_no=20200000;
	static char name[25],fname[25],mname[25],r_address[100],p_address[100];
	public:
		void in()
		{
			cout<<"Enter Student name: "<<endl;
			cin>>name;
			cout<<"Enter Student's father name: "<<endl;
			cin>>fname;
			cout<<"Enter Student's mother name: "<<endl;
			cin>>mname;
			cout<<"Enter Your residental address: "<<endl;
			cin>>r_address;
			cout<<"Enter your Permanent address: "<<endl;
			cin>>p_address;
		}
		void out()
		{
			cout<<"Student's name: "<<name<<endl;
			cout<<"Roll number: "<<roll_no<<endl;
			roll_no++;
			cout<<"Registration number: "<<registration_no<<endl;
			registration_no++;
			cout<<"Current Session: 2020"<<endl;
			cout<<"Father name: "<<fname<<endl;
			cout<<"Mother name: "<<mname<<endl;
			cout<<"Residental address: "<<r_address<<endl;
			cout<<"Permanent address: "<<p_address<<endl;
		}
}a1;
int A::roll_no;
int A::registration_no;
char A::name;
char::fname;
char A::mname;
char A::r_address;
char A::p_address;
main()
{
	A a2,a3,a4,a5,a6,a7,a8,a9,a10;
	int x;
	cout<<"total number of admission sheet: 10"<<endl;
	for(x=1;x<10;x++)
	a1.in();
	a1.out();
	a2.in();
	a2.out();
	a3.in();
	a3.out();
	a4.in();
	a4.out();
	a5.in();
	a5.out();
	a6.in();
	a6.out();
	a7.in();
	a7.out();
	a8.in();
	a8.out();
	a9.in();
	a9.out();
	a10.in();
	a10.out();
}
