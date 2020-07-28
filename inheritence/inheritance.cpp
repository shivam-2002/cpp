#include<iostream>
using namespace std;
class B
{
	protected: int x;
	public:
		void output()
		{
			cout<<"Enter X: "<<endl;
			cin>>x;
		}
};
class D:public B
{
	public:
		void output()
		{
			cout<<"X from B is: "<<x<<endl;;
		}
};
main()
{
	D d1;
	//d1.output();
	d1.B::output();
	d1.output();
}

