#include<iostream>
using namespace std;
class A
{
	public: int x,fact=1;
	public:
		void getx()
		{
			cout<<"Enter Value to find factorial: ";
			cin>>x;
		}
		friend void findfact(A a2);
};
void findfact(A a2)
		{
			if(a2.x>1)
			{
				a2.fact=a2.fact*a2.x;
				a2.x--;
				findfact(a2);
			}
				//5cout<<"Factorial of is: "<<a2.fact<<endl;
			
			
		}
main()
{
	A a1, a2;
	a1.getx();
	findfact(a1);
	cout<<"Factorial of is: "<<a2.fact<<endl;

}
