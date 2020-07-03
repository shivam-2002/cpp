#include<iostream>
#include<list>
using namespace std;
class A
{
	public: int a[10]={12,34,56,67,87,45,99,344,57,90};
	list<int> x;
	public:
		void input()
		{
			
			for(int i=0;i<10;i++)
			{
				x.push_back(a[i]);
			}
		}
		void pop()
		{
			for(int i=0;i<4;i++)
			{
				x.pop_front();
			}
			x.pop_back();
			x.pop_back();
		}
		void rev()
		{
			x.reverse();
		}
		void display()
		{
			list<int>::iterator p;
			p=x.begin();
			for(int i=0;p!=x.end();i++)
			{
				cout<<*p<<endl;
			}
		}
};
int main()
{
	A a;
	a.input();
	a.pop();
	a.rev();
	a.display();
}
