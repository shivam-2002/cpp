#include<iostream>
using namespace std;
/*swap(int x,int y)//call by value
{
	int t;
	t=x;
	x=y;
	y=t;
	cout<<"Number after swapping is: "<<x<<" "<<y;
}
main()
{
	int x,y;
	cout<<"Enter Value of x and y: ";
	cin>>x>>y;
	swap(x,y);
} 
*/
/*
swap(int *x,int *y)//call by address
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	cout<<"Number after swapping is: "<<*x<<" "<<*y;
}                                                  
main()
{
	int x,y;
	cout<<"Enter value of x and y: ";
	cin>>x>>y;
	swap(&x,&y);
}
*/
swap(int &x,int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
	cout<<"Number after swapping: "<<x<<" "<<t;
}
main()
{
	int x,y;
	cout<<"Enter Two Numbers: ";
	cin>>x>>y;
	swap(x,y);
}
                                                                                                                                                                                                                                                                                                                                                                                    
