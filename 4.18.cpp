#include <iostream>
#include <math.h>
using namespace std;
int main (){
	system ("color F0");
	double rad, dia, vol, sur, pi = 3.14159;
	
	cout << "Enter radius of Sphere : " <<endl;
	cin  >> rad;
	
	dia = 2 * rad;
	vol = (4/3) * pi * (pow(rad,3));
	sur = pi * (pow(rad,2));
	
	cout << "diameter of shpere : " << dia<<endl;
	cout << "surface area of sphere : " <<sur <<endl;
	cout << "volume of sphere : " <<vol <<endl;
	
	return 0;
}
