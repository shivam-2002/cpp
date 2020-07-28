#include<iostream>
#include<fstream>
using namespace std;
main()
{
	int x;
	cout<<"Enter X: ";
	cin>>x;
	
	
	ofstream w;//object of the class ofstring//ofstream is responsible for write
	w.open("K19RC.txt");//file is created and also open
	w<<x;//copy value of x into w;
	w.close();
	
	
	
	
}
