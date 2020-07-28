#include<iostream>
using namespace std;
class B
{
	protected:
		int x;
	public:
		void input()
		{
			cout<<"Enter x: ";
			cin>>x;
		}
};
class D1:public B
{
	protected: int y;
    public:
    	void output()
    	{
    		y=x*x;
    		cout<<y<<endl;
		}
};
class D2:public B
{
	public:
		void output()
		{
			cout<<(x*x*x);
		}
};
main()
{
	D1 d1;
	D2 d2;
	d1.output();
	d2.output();
}
