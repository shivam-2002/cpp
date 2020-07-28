#include<iostream>
using namespace std;
class B
{
	protected: int x;
	public:
		void input()
		{
			cout<<"Enter X: ";
			cin>>x;
		}
};
class D:protected B
{
	public:
		void output()
		{
			
			input();
			cout<<"X from B is: "<<x;
		}
};
main()
{
	D d1;
	//d1.input();
	d1.output();
}

