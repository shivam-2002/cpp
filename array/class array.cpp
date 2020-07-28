#include<iostream>
using namespace std;
class A
{
	int i,j,n,t;
	float per[5];
	public:
		void getpercentage()
		{
			cout<<"Enter Percentage: ";
			for(n=0;n<5;n++)
			{
				cin>>per[n];
			}
		}
		void bubble()
		{
			for(i=0;i<5;i++)
			{
				for(j=0;j<4;j++)
				{
					if(per[j]>per[i])
					{
						t=per[j];
						per[j]=per[i];
						per[i]=t;
					}
				}
			}
		}
		void out()
		{
			cout<<"Maximum Percentage: "<<per[4];
		}
};
main()
{
	A a1;
	a1.getpercentage();
	a1.bubble();
	a1.out();
}
