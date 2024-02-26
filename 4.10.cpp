#include <iostream>
#include <math.h>  // use if math.h laberery
using namespace std;
int main(){
	int d, x1, x2, y1, y2;
	
	cout << "Enter the value of x1"  << endl;
	cin  >> x1; // get value of x1
	cout << "Enter the value of x2"  << endl;
	cin  >> x2;  // get value of x2
	cout << "Enter the value of y1"  << endl;
	cin  >> y1;  // get value of y1
	cout << "Enter the value of y2"  << endl;
	cin  >> y2;  // get value of y2
	
	d = sqrt(pow(x2- x1, 2)+ pow( y2 - y2, 2));  
	// distance between two point formula 
	cout << "The Result is : "  <<d;
    return 0;	
}
