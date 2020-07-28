#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
main()
{
	cout<<ceil(1000000.125)<<endl;
	cout<<fixed<<ceil(1000000.125)<<endl;
	cout<<setprecision(0)<<fixed<<ceil(1000000.125);
}
