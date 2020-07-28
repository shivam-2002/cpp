#include<iostream>
using namespace std;
class student
{
	int a,b;
	public:
		void setdata1(int a,int b)//formal varibles
		{
			a=a;//it is not assigning the value//address is not assigned
			this->b=b;//THE VALUES OF THE ARGUMENT GET ASSIGNED TO THEMSELVES
		}
		void showdata()
		{
			cout<<"The values of a and b are: "<<endl;
			cout<<endl<<a<<endl<<b<<endl;
		}
};
main()
{
	student a1;
	a1.setdata1(6,7);
	a1.showdata();
}
