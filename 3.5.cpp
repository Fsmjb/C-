#include <iostream>
using namespace std;
int main(){
	system ("color F0");
	float P, T, R, I;
	P = 4000; // The value of P is
	T = 2;    // The value of T is
	R = 5.5;    // The value of R is
	
	I = (P * T * R)/100; // The formula for simple interest is
	cout << "The given value of P is : " <<P <<endl;
	cout << "The simple interest is  : "  <<I <<endl;
	
	return 0;
}
