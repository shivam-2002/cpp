#include<iostream>
#include<fstream>
using namespace std;
class A
{
	int a,b;
	public:
		void input()
		{
			cout<<"ENTER VALUES OF a AND b: ";
			cin>>a>>b;
		}
		void sum(A a1)
		{
			cout<<"SUM OF a AND b : "<<endl;
			a1.a+a1.b;
		}
		void difference(A a1)
		{
			cout<<"DIFFERENCE OF a AND b: "<<a1.a-a1.b<<endl;
		}
		void multiplication(A a1)
		{
			cout<<"MULTIPLICATION OF a AND b: "<<a1.a*a1.b<<endl;
		}
		void division(A a1)
		{
			cout<<"DIVISON OF a AND b: "<<a1.a/a1.b<<endl;
		}
};
int main()
{
	A a1;
	//int a,b;
	//cin>>a>>b;
	a1.input();
	ofstream i("set.txt");
	i.write((char *)&a1,sizeof(a1));
	i.close();
	ifstream p("set.txt");
	p.read((char *)&a1,sizeof(a1));
	a1.sum(a1);
	a1.difference(a1);
	a1.multiplication(a1);
	a1.division(a1);
}
