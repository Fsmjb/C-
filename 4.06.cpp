#include <iostream>
#include <math.h>
using namespace std;
int main(){
	system ("color F0");
	int x, b;
	
	cout << "Enter the value of x" <<endl;
	cin  >> x;
	
	b = (2*pow(x,5))+(3*pow(x,4))-(pow(x,3))-(2*pow(x,2))+(7*x)-6;
	
	cout << "The Reslut is : " <<b;
	
	return 0;
}
