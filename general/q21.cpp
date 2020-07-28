#include<iostream>
#include<fstream>
using namespace std;
class Derived;
class Base1
{
	protected:
		float s,d;
	public:
		void sum(float a,float b)
		{
			s=a+b;
		} 
		void diff(float a,float b)
		{
			d=a-b;
		}
	
};
class Base2
{
	protected:
		float m,di;
	public:
		void mul(float a,float b)
		{
			m=a*b;
		}
		void div(float a,float b)
		{
			di=a/b;
		}
};
class Derived:public Base1,public Base2
{
	public:
	void show()
	{
		cout<<"Sum of 'a' amd 'b': "<<s<<endl;
		cout<<"Difference of 'a' and 'b': "<<d<<endl;
		cout<<"Multiplication of 'a' and 'b': "<<m<<endl;
		cout<<"Division of 'a' and 'b': "<<di<<endl;
	}	
};
int main()
{
	Derived d1;
	float a,b;
	cout<<"Enter Value of a and b: ";
	cin>>a>>b;
	ofstream w("question.txt");
	w.write((char *)&d1,sizeof(d1));
	w.close();
	ifstream r("question.txt");
	r.read((char *)&d1,sizeof(d1));
	r.close();
	d1.sum(a,b);
	d1.diff(a,b);
	d1.mul(a,b);
	d1.div(a,b);
	d1.show();
}
