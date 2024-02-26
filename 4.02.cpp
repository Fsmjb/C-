#include <iostream>
using namespace std;
int main(){
	system ("color F0");
	int a, b, c;
	cout << "Enter the value of a :" << endl;
	cin >> a;
	
	cout << " Enter the value of b :" << endl;
	cin >> b;
	
	c  = (a*a)+(2*a*b)+(b*b);
	cout << "result is " <<c;
	return 0;
}
