#include <iostream>
using namespace std;
int main(){
	system ("color F0");
	float rad, cir,area, pi = 3.145;
	
	cout << "Enter the radius of circle in meter"
	 <<endl;
	cin >>rad;   // take input from user
	
	
	cir =  2 * pi * rad; // get  circumference of circle
	cout << " The circumference of circle is " << cir << "m" << endl;
	
	area = pi *(rad * rad);   // get area of circle
	cout << " The area of a circle is "  << area << "m"; 
	return 0;
}
